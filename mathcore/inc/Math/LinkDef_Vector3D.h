// @(#)root/mathcore:$Name:  $:$Id: LinkDef_Vector3D.h,v 1.1 2005/09/18 17:33:47 brun Exp $
// Authors: W. Brown, M. Fischler, L. Moneta    2005  



// for template DisplacementVector3D functions

#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> >::operator=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> >::operator=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> >::operator=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> >::operator=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> >::operator=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> >::operator=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &);


#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> >::Dot(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> >::Dot(const  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> >::Dot(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &);

#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> >::Dot(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> >::Dot(const  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> >::Dot(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &);

#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> >::Dot(const  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> >::Dot(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> >::Dot(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &);


#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> >::Cross(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> >::Cross(const  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> >::Cross(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &);

#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> >::Cross(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> >::Cross(const  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> >::Cross(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &);

#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> >::Cross(const  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> >::Cross(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> >::Cross(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &);

// operator -=

#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> >::operator-=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> >::operator-=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> >::operator-=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &);

#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> >::operator-=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> >::operator-=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> >::operator-=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &);

#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> >::operator-=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> >::operator-=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> >::operator-=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &);

// operator +=

#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> >::operator+=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> >::operator+=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> >::operator+=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &);

#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> >::operator+=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> >::operator+=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> >::operator+=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &);

#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> >::operator+=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> >::operator+=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &);
#pragma link C++ function  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> >::operator+=(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &);

// operator + 

#pragma link C++ function  ROOT::Math::operator+(const ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> >  &, ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &);
#pragma link C++ function  ROOT::Math::operator+(const  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &,  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &);
#pragma link C++ function  ROOT::Math::operator+(const ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &,  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &);

#pragma link C++ function  ROOT::Math::operator+(const ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &,  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &);
#pragma link C++ function  ROOT::Math::operator+(const ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &,  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &);
#pragma link C++ function  ROOT::Math::operator+(const ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &,  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &);

#pragma link C++ function  ROOT::Math::operator+(const ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &,  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &);
#pragma link C++ function  ROOT::Math::operator+(const ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &,  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &);
#pragma link C++ function  ROOT::Math::operator+(const ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &,  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &);


// operator -

#pragma link C++ function  ROOT::Math::operator-(const ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &,  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &);
#pragma link C++ function  ROOT::Math::operator-(const ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &,  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &);
#pragma link C++ function  ROOT::Math::operator-(const ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &,  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &);

#pragma link C++ function  ROOT::Math::operator-(const ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &,  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &);
#pragma link C++ function  ROOT::Math::operator-(const ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &,  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &);
#pragma link C++ function  ROOT::Math::operator-(const ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &,  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &);

#pragma link C++ function  ROOT::Math::operator-(const ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &,  ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &);
#pragma link C++ function  ROOT::Math::operator-(const ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &,  ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > &);
#pragma link C++ function  ROOT::Math::operator-(const ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > &,  ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > &);

// operator * 

#pragma link C++ function ROOT::Math::operator*( const double & , ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> > );
//#pragma link C++ function ROOT::Math::operator*( const double & , ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> > );
//#pragma link C++ function ROOT::Math::operator*( const double & , ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> > );


// utility functions

// delta Phi
#pragma link C++ function  ROOT::Math::VectorUtil::DeltaPhi ( const  ROOT::Math::DisplacementVector3D< ROOT::Math::Cartesian3D< double> > &, const  ROOT::Math::DisplacementVector3D< ROOT::Math::Cartesian3D< double> > &);
#pragma link C++ function  ROOT::Math::VectorUtil::DeltaPhi ( const  ROOT::Math::DisplacementVector3D< ROOT::Math::Polar3D< double> > &, const  ROOT::Math::DisplacementVector3D< ROOT::Math::Polar3D< double> > &);
#pragma link C++ function  ROOT::Math::VectorUtil::DeltaPhi ( const  ROOT::Math::DisplacementVector3D< ROOT::Math::CylindricalEta3D< double> > &, const  ROOT::Math::DisplacementVector3D< ROOT::Math::CylindricalEta3D< double> > &);

// deltaR 

#pragma link C++ function  ROOT::Math::VectorUtil::DeltaR ( const  ROOT::Math::DisplacementVector3D< ROOT::Math::Cartesian3D< double> > &, const  ROOT::Math::DisplacementVector3D< ROOT::Math::Cartesian3D< double> > &);
#pragma link C++ function  ROOT::Math::VectorUtil::DeltaR ( const  ROOT::Math::DisplacementVector3D< ROOT::Math::Polar3D< double> > &, const  ROOT::Math::DisplacementVector3D< ROOT::Math::Polar3D< double> > &);
#pragma link C++ function  ROOT::Math::VectorUtil::DeltaR ( const  ROOT::Math::DisplacementVector3D< ROOT::Math::CylindricalEta3D< double> > &, const  ROOT::Math::DisplacementVector3D< ROOT::Math::CylindricalEta3D< double> > &);

// cosTheta

#pragma link C++ function  ROOT::Math::VectorUtil::CosTheta ( const  ROOT::Math::DisplacementVector3D< ROOT::Math::Cartesian3D< double> > &, const  ROOT::Math::DisplacementVector3D< ROOT::Math::Cartesian3D< double> > &);
#pragma link C++ function  ROOT::Math::VectorUtil::CosTheta ( const  ROOT::Math::DisplacementVector3D< ROOT::Math::Polar3D< double> > &, const  ROOT::Math::DisplacementVector3D< ROOT::Math::Polar3D< double> > &);
#pragma link C++ function  ROOT::Math::VectorUtil::CosTheta ( const  ROOT::Math::DisplacementVector3D< ROOT::Math::CylindricalEta3D< double> > &, const  ROOT::Math::DisplacementVector3D< ROOT::Math::CylindricalEta3D< double> > &);

// angle

#pragma link C++ function  ROOT::Math::VectorUtil::Angle ( const  ROOT::Math::DisplacementVector3D< ROOT::Math::Cartesian3D< double> > &, const  ROOT::Math::DisplacementVector3D< ROOT::Math::Cartesian3D< double> > &);
#pragma link C++ function  ROOT::Math::VectorUtil::Angle ( const  ROOT::Math::DisplacementVector3D< ROOT::Math::Polar3D< double> > &, const  ROOT::Math::DisplacementVector3D< ROOT::Math::Polar3D< double> > &);
#pragma link C++ function  ROOT::Math::VectorUtil::Angle ( const  ROOT::Math::DisplacementVector3D< ROOT::Math::CylindricalEta3D< double> > &, const  ROOT::Math::DisplacementVector3D< ROOT::Math::CylindricalEta3D< double> > &);

