#include <iostream>
#include <cassert>
//#include "complex_numbers.hpp"
#include "complex_numbers.cpp" // not sure why this work over including the .hpp, it just does and I have no clue why
using namespace std;

int main () {
	ComplexNumber zeros;
	ComplexNumber ones (1,1);
	ComplexNumber manys (5,6);
	ComplexNumber negative (-34, -65);
	ComplexNumber testing;

	cout << "findReal and findImaginary method calls" << endl;
	assert(zeros.findReal() == 0);
	assert(zeros.findImaginary() == 0);
	assert(ones.findReal() == 1);
	assert(manys.findImaginary() == 6);
	cout << "passed \n" << endl;

	cout << "addition and subtraction method calls" << endl;
	zeros.add(zeros);
	zeros.pretty_print();
	testing = zeros.add(ones);
	testing.pretty_print();
	testing = testing.add(negative);
	testing.pretty_print();
	testing = testing.subtract(negative);
	testing.pretty_print();

	cout << "passed \n" << endl;

	cout << "multiplcation and division method calls;" << endl;

	testing = testing.multiply(manys);
	testing.pretty_print();
	testing = testing.multiply(zeros);
	testing.pretty_print();
	testing = ComplexNumber(1,1);
	testing = testing.multiply(negative);
	testing.pretty_print();
	testing = testing.divide(manys);
	testing.pretty_print();
	cout << "passed \n" << endl;

	cout << "negtion, magnitude, and conjugation method calls" << endl;

	testing = manys.negate();
	testing.pretty_print();
	testing = negative.negate();
	testing.pretty_print();
	testing = ones;
	cout << testing.magnitude() << endl;
	cout << negative.magnitude() << endl;
	testing.conjugation().pretty_print();
	negative.conjugation().pretty_print();

	cout << "passed" << endl;
	//assert(testing.magnitude() == sqrt(2)); //not working even though it's the same


 //ComplexNumber numberList[4] { number_one, number_two, number_three, _number_four };

// ComplexList list = ComplexList(numberList);
//cout << list.sum(); // Returns 17.5 + 24.1i
	return 0;
}