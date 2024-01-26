#include <iostream>
#include <cmath>
#include "complex_numbers.hpp"
using namespace std;


// ComplexNumber(float realNumber, float imaginaryNumber) {
// 	this->realNumber = realNumber;
// 	this->imaginaryNumber = imaginaryNumber;
// }
ComplexNumber::ComplexNumber(float realNumber, float imaginaryNumber) {
	this->realNumber = realNumber;
	this->imaginaryNumber = imaginaryNumber;
}

ComplexNumber::ComplexNumber() {
	realNumber = 0;
	imaginaryNumber = 0;
}

float ComplexNumber::findReal() {
	return realNumber;
}

float ComplexNumber::findImaginary() {
	return imaginaryNumber;
}

ComplexNumber ComplexNumber::add (ComplexNumber two) {
	
	return ComplexNumber(realNumber + two.findReal(), imaginaryNumber + two.findImaginary());
}

ComplexNumber ComplexNumber::subtract (ComplexNumber two) {
	
	return ComplexNumber(realNumber - two.findReal(), imaginaryNumber - two.findImaginary());
}

ComplexNumber ComplexNumber::multiply (ComplexNumber two) {
	float realPart = (realNumber * two.findReal()) - (imaginaryNumber * two.findImaginary());
	float imaginaryPart = (realNumber * two.findImaginary()) + (two.findReal() * imaginaryNumber);
	
	return ComplexNumber(realPart, imaginaryPart);
}

ComplexNumber ComplexNumber::divide (ComplexNumber two) {
	float realPart = ((realNumber * two.findReal()) + (imaginaryNumber * two.findImaginary())) / ((two.findReal() * two.findReal()) + (two.findImaginary() * two.findImaginary()));
	float imaginaryPart = ((realNumber * two.findImaginary()) - (imaginaryNumber * two.findReal())) / ((two.findReal() * two.findReal()) + (two.findImaginary() * two.findImaginary()));

	return ComplexNumber(realPart, imaginaryPart);
}

ComplexNumber ComplexNumber::negate () {

return ComplexNumber((realNumber * -1), (imaginaryNumber * -1));
}

float ComplexNumber::magnitude () {
	return sqrt((abs(realNumber * realNumber) + abs(imaginaryNumber * imaginaryNumber)));
}

ComplexNumber ComplexNumber::conjugation() {
	return ComplexNumber(realNumber, imaginaryNumber * -1);
}

void ComplexNumber::pretty_print () {
	cout << realNumber << " + " << imaginaryNumber << "i" << endl;;
}



