class ComplexNumber {
	private:
		float realNumber;
		float imaginaryNumber;

	public:

		ComplexNumber(float, float);
		ComplexNumber();

		ComplexNumber add(ComplexNumber);
		ComplexNumber subtract(ComplexNumber);
		ComplexNumber multiply(ComplexNumber);
		ComplexNumber divide(ComplexNumber);
		
		ComplexNumber negate();
		ComplexNumber conjugation();

		float findReal();
		float findImaginary();
		float magnitude();

		void pretty_print();

};

class ComplexList {
	private:
		ComplexNumber elements[];

	public:
		ComplexList(ComplexNumber[]);
		//ComplexList();
};
