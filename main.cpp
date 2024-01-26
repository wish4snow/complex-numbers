#include <iostream>
#include <cassert>
#include "complex_numbers.hpp"
using namespace std;

int main () {
	ComplexNumber test1 (1,2);
	ComplexNumber test2 (3,4);
	ComplexNumber test3 (4,6);
	cout << "add" << endl;
	test3.add(test1,test2);
	//assert (test3.add(test1, test2) == ComplexNumber(4,6));
	cout << "done" << endl;
	return 0;
}