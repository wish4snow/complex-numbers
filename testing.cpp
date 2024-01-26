#include <iostream>
#include <cassert>
//#include "complex_numbers.hpp"
#include "complex_numbers.cpp" // not sure why this work over including the .hpp, it just does and I have no clue why
using namespace std;

int main () {
	ComplexNumber zeros;
	ComplexNumber ones (1,1);
	ComplexNumber manys (5,6);
	manys.pretty_print();
	cout << "add" << endl;
	zeros.add(zeros);
	assert (zeros.findReal() == 0);
	cout << "done" << endl;
	ComplexNumber number_one = ComplexNumber(5.0, 7.0);
ComplexNumber number_two = ComplexNumber(2.5, 3.1);

ComplexNumber number_three = number_one.add(number_two);
number_three.pretty_print(); // Returns 7.5 + 10.1i

ComplexNumber number_four = number_one.subtract(number_two);
number_four.pretty_print(); // Returns 2.5 + 3.9i

float magnitude = number_one.magnitude();
cout << magnitude; // Returns 8.602325267

 ComplexNumber numberList[4] { number_one, number_two, number_three, _number_four };

// ComplexList list = ComplexList(numberList);
//cout << list.sum(); // Returns 17.5 + 24.1i
	return 0;
}