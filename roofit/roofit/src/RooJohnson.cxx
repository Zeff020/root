// Author: Stephan Hageboeck, CERN, May 2019
/*****************************************************************************
 * Project: RooFit                                                           *
 * Authors:                                                                  *
 *   WV, Wouter Verkerke, UC Santa Barbara, verkerke@slac.stanford.edu       *
 *   DK, David Kirkby,    UC Irvine,         dkirkby@uci.edu                 *
 *                                                                           *
 * Copyright (c) 2000-2019, Regents of the University of California          *
 *                          and Stanford University. All rights reserved.    *
 *                                                                           *
 * Redistribution and use in source and binary forms,                        *
 * with or without modification, are permitted according to the terms        *
 * listed in LICENSE (http://roofit.sourceforge.net/license.txt)             *
 *****************************************************************************/

/** \class RooJohnson
    \ingroup Roofit

Johnson's \f$ S_{U} \f$ distribution.

This PDF results from transforming a normally distributed variable \f$ x \f$ to this form:
\f[
  z = \gamma + \delta \sinh^{-1}\left( \frac{x - \mu}{\lambda} \right)
\f]
The resulting PDF is
\f[
  \mathrm{PDF}[\mathrm{Johnson}\ S_U] = \frac{\delta}{\lambda\sqrt{2\pi}}
  \frac{1}{\sqrt{1 + \left( \frac{x-\mu}{\lambda} \right)^2}}
  \;\exp\left[-\frac{1}{2} \left(\gamma + \delta \sinh^{-1}\left(\frac{x-\mu}{\lambda}\right) \right)^2\right].
\f]

It is often used to fit a mass difference for charm decays, and therefore the variable \f$ x \f$ is called
"mass" in the implementation. A mass threshold allows to set the PDF to zero to the left of the threshold.

###References:
Johnson, N. L. (1949). *Systems of Frequency Curves Generated by Methods of Translation*. Biometrika **36(1/2)**, 149–176. [doi:10.2307/2332539](https://doi.org/10.2307%2F2332539)

\image html RooJohnson_plot.png

**/

#include "RooJohnson.h"

#include "RooRandom.h"
#include "RooHelpers.h"
#include "RooBatchCompute.h"

#include <cmath>
#include "TMath.h"

ClassImp(RooJohnson);

////////////////////////////////////////////////////////////////////////////////
/// Construct a new Johnson PDF.
///
/// \param name Name that identifies the PDF in computations
/// \param title Title for plotting
/// \param mass The variable of the PDF. Often this is a mass.
/// \param mu Location parameter of the Gaussian component.
/// \param lambda Width parameter (>0) of the Gaussian component.
/// \param gamma Shape parameter that distorts distribution to left/right.
/// \param delta Shape parameter (>0) that determines strength of Gaussian-like component.
/// \param massThreshold Set PDF to zero below this threshold.
RooJohnson::RooJohnson(const char *name, const char *title,
          RooAbsReal& mass, RooAbsReal& mu, RooAbsReal& lambda,
          RooAbsReal& gamma, RooAbsReal& delta,
          double massThreshold) :
  RooAbsPdf(name,title),
  _mass("mass", "Mass observable", this, mass),
  _mu("mu", "Location parameter of the underlying normal distribution.", this, mu),
  _lambda("lambda", "Width parameter of the underlying normal distribution (=2 lambda)", this, lambda),
  _gamma("gamma", "Shift of transformation", this, gamma),
  _delta("delta", "Scale of transformation", this, delta),
  _massThreshold(massThreshold)
{
  RooHelpers::checkRangeOfParameters(this, {&lambda, &delta}, 0.);
}


////////////////////////////////////////////////////////////////////////////////
/// Copy a Johnson PDF.
RooJohnson::RooJohnson(const RooJohnson& other, const char* newName) :
  RooAbsPdf(other, newName),
  _mass("Mass", this, other._mass),
  _mu("mean", this, other._mu),
  _lambda("lambda", this, other._lambda),
  _gamma("gamma", this, other._gamma),
  _delta("delta", this, other._delta),
  _massThreshold(other._massThreshold)
{

}


////////////////////////////////////////////////////////////////////////////////

double RooJohnson::evaluate() const
{
  if (_mass < _massThreshold)
    return 0.;

  const double arg = (_mass-_mu)/_lambda;
  const double expo = _gamma + _delta * asinh(arg);

  const double result = _delta
      / sqrt(TMath::TwoPi())
      / (_lambda * sqrt(1. + arg*arg))
      * exp(-0.5 * expo * expo);

  return result;
}

////////////////////////////////////////////////////////////////////////////////
/// Compute multiple values of the Johnson distribution. 
void RooJohnson::computeBatch(RooBatchCompute::RooBatchComputeInterface* dispatch, double* output, size_t nEvents, RooBatchCompute::DataMap& dataMap) const
{
  dispatch->compute(RooBatchCompute::Johnson, output, nEvents, dataMap, {&*_mass,&*_mu,&*_lambda,&*_gamma,&*_delta,&*_norm},{_massThreshold});
}

////////////////////////////////////////////////////////////////////////////////

int RooJohnson::getAnalyticalIntegral(RooArgSet& allVars, RooArgSet& analVars, const char* /*rangeName*/) const
{
  if (matchArgs(allVars, analVars, _mass)) return kMass;
  if (matchArgs(allVars, analVars, _mu)) return kMean;
  if (matchArgs(allVars, analVars, _lambda)) return kLambda;
  if (matchArgs(allVars, analVars, _gamma)) return kGamma;
  if (matchArgs(allVars, analVars, _delta)) return kDelta;
  //TODO write integral for others
  return 0;
}

////////////////////////////////////////////////////////////////////////////////

double RooJohnson::analyticalIntegral(Int_t code, const char* rangeName) const
{
  //The normalisation constant is left out in evaluate().
  //Therefore, the integral is scaled up by that amount to make RooFit normalise
  //correctly.
  const double globalNorm = 1.;
//  const double globalNorm = sqrt(TMath::TwoPi());

  //Here everything is scaled and shifted such that we only need to compute CDF(Gauss):
  double min = -1.E300;
  double max = 1.E300;
  if (kMass <= code && code <= kLambda) {
    double argMin, argMax;

    if (code == kMass) {
      argMin = (_mass.min(rangeName)-_mu)/_lambda;
      argMax = (_mass.max(rangeName)-_mu)/_lambda;
    } else if (code == kMean) {
      argMin = (_mass-_mu.min(rangeName))/_lambda;
      argMax = (_mass-_mu.max(rangeName))/_lambda;
    } else {
      assert(code == kLambda);
      argMin = (_mass-_mu)/_lambda.min(rangeName);
      argMax = (_mass-_mu)/_lambda.max(rangeName);
    }

    min = _gamma + _delta * asinh(argMin);
    max = _gamma + _delta * asinh(argMax);
  } else if (code == kGamma) {
    const double arg = (_mass-_mu)/_lambda;
    min = _gamma.min(rangeName) + _delta * asinh(arg);
    max = _gamma.max(rangeName) + _delta * asinh(arg);
  } else if (code == kDelta) {
    const double arg = (_mass-_mu)/_lambda;
    min = _gamma + _delta.min(rangeName) * asinh(arg);
    max = _gamma + _delta.max(rangeName) * asinh(arg);
  } else {
    assert(false);
  }



  //Here we go for maximum precision: We compute all integrals in the UPPER
  //tail of the Gaussian, because erfc has the highest precision there.
  //Therefore, the different cases for range limits in the negative hemisphere are mapped onto
  //the equivalent points in the upper hemisphere using erfc(-x) = 2. - erfc(x)
  const double ecmin = std::erfc(std::abs(min/sqrt(2.)));
  const double ecmax = std::erfc(std::abs(max/sqrt(2.)));

  const double result = 0.5 * (
      min*max < 0.0 ? 2.0 - (ecmin + ecmax)
                    : max <= 0. ? ecmax - ecmin : ecmin - ecmax
  );

  // Now, include the global norm that may be missing in evaluate and return
  return globalNorm * (result != 0. ? result : 1.E-300);
}



////////////////////////////////////////////////////////////////////////////////
/// Advertise which kind of direct event generation is supported.
///
/// So far, only generating mass values is supported.
Int_t RooJohnson::getGenerator(const RooArgSet& directVars, RooArgSet &generateVars, Bool_t /*staticInitOK*/) const
{
  if (matchArgs(directVars, generateVars, _mass)) return 1 ;
//  if (matchArgs(directVars, generateVars, _mu)) return 2 ;
  return 0 ;
}



////////////////////////////////////////////////////////////////////////////////
/// Generate events based on code obtained by getGenerator().
///
/// So far, only generating mass values is supported. Others will have to be generated
/// by the slower accept/reject method.
void RooJohnson::generateEvent(Int_t code)
{
  if (code == 1) {
    while (true) {
      const double gauss = RooRandom::randomGenerator()->Gaus(0., 1.);
      const double mass = _lambda * sinh((gauss - _gamma)/_delta) + _mu;
      if (_mass.min() <= mass && mass <= _mass.max() && _massThreshold <= mass) {
        _mass = mass;
        break;
      }
    }
  } else {
    throw std::logic_error("Generation in other variables not yet implemented.");
  }
}
