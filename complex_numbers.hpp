#include <iostream>
using namespace std;

class ComplexNumber {
	private:
		float realNumber;
		float imaginaryNumber;

	public:
		ComplexNumber(float realNumber, float imaginaryNumber);

		ComplexNumber add(ComplexNumber one, ComplexNumber two);
		ComplexNumber subtract(ComplexNumber one, ComplexNumber two);
		ComplexNumber multiply(ComplexNumber one, ComplexNumber two);
		ComplexNumber divide(ComplexNumber one, ComplexNumber two);
		ComplexNumber negate(ComplexNumber one);
		ComplexNumber magnitude(ComplexNumber one);
		ComplexNumber conjugation(ComplexNumber one);
		
		float findReal(ComplexNumber one);
		float findImaginary(ComplexNumber one);

};