#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;
class Complex{
	private:
		double realPart;
		double imaginaryPart;
		void setComplexNumber(double realPart, double imaginaryPart);
	public:
		Complex(double realPart, double imaginaryPart);
		void addition(const Complex &A);
		void subtraction(const Complex &A);
		void printComplex();
	
};


#endif
