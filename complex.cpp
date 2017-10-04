#include "complex.h"
Complex::Complex(double realPart, double imaginaryPart)
{
	this->realPart = realPart;
	this->imaginaryPart = imaginaryPart;
}
 void Complex::addition(const Complex &A)
{
	this->realPart+=A.realPart;
	this->imaginaryPart+=A.imaginaryPart;
}
void Complex::subtraction(const Complex &A)
{
	this->realPart -= A.realPart;
	this->imaginaryPart -= A.imaginaryPart;
}
void Complex::printComplex()
{
	if(this->imaginaryPart > 0)
	{
		cout<<this->realPart<<" + "<<this->imaginaryPart<<"i\n";
	}
	else
		cout<<this->realPart<<this->imaginaryPart<<"i\n";

}
void Complex::setComplexNumber(double real, double imaginary)
{
	this->realPart =  real;
	this->imaginaryPart = imaginary;
}
