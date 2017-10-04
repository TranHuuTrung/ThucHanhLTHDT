#include "complex.h"
#include <iostream>
using namespace std;
int main()
{
	Complex A(3,4);
	Complex B(1.2, -12.4);
    A.addition(B);
    A.printComplex();
	return 0;
}
