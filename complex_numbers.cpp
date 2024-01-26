#include <iostream>
#include <cmath>
#include "complex_numbers.hpp"
using namespace std;
/*
ComplexNumber::ComplexNumber(float realNumber, float imaginaryNumber) {
	this->realNumber = realNumber;
	this->imaginaryNumber = imaginaryNumber;
}
*/

float ComplexNumber::findReal(ComplexNumber one) {
	return realNumber;
}

float ComplexNumber::findImaginary(ComplexNumber one) {
	return imaginaryNumber;
}

ComplexNumber ComplexNumber::add (ComplexNumber one, ComplexNumber two) {
	
	return ComplexNumber(findReal(one) + findReal(two), findImaginary(one) + findImaginary(two));
}

ComplexNumber ComplexNumber::subtract (ComplexNumber one, ComplexNumber two) {
	
	return ComplexNumber(findReal(one) - findReal(two), findImaginary(two) - findImaginary(two));
}

ComplexNumber ComplexNumber::multiply (ComplexNumber one, ComplexNumber two) {
	float realPart = (findReal(one) * findReal(two)) - (findImaginary(one) * findImaginary(two));
	float imaginaryPart = (findReal(one) * findImaginary(two)) + (findReal(two) * findImaginary(one));
	
	return ComplexNumber(realPart, imaginaryPart);
}

ComplexNumber ComplexNumber::divide (ComplexNumber one, ComplexNumber two) {
	float realPart = ((findReal(one) * findReal(two)) + (findImaginary(one) * findImaginary(two))) / ((findReal(two) * findReal(two)) + (findImaginary(two) * findImaginary(two)));
	float imaginaryPart = ((findReal(one) * findImaginary(two)) - (findImaginary(one) * findReal(two))) / ((findReal(two) * findReal(two)) + (findImaginary(two) * findImaginary(two)));

	return ComplexNumber(realPart, imaginaryPart);
}

ComplexNumber ComplexNumber::negate (ComplexNumber one) {

return ComplexNumber((findReal(one) * -1), (findImaginary(one) * -1));
}

float ComplexNumber::magnitude (ComplexNumber one) {
	return sqrt((abs(findReal(one) * findReal(one)) + abs(findImaginary(one) * findImaginary(one))));
}

ComplexNumber ComplexNumber::conjugation(ComplexNumber one) {
	return ComplexNumber(findReal(one), findImaginary(one) * -1);
}





