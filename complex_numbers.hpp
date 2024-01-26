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
		ComplexNumber negate(ComplexNumber one, ComplexNumber two);
		ComplexNumber magnitude(ComplexNumber one, ComplexNumber two);
		ComplexNumber conjugation(ComplexNumber one, ComplexNumber two);
		ComplexNumber findReal(ComplexNumber one, ComplexNumber two);
		ComplexNumber findImaginary(ComplexNumber one, ComplexNumber two);

};