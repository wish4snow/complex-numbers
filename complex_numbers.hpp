

class ComplexNumber {
	private:
		float realNumber;
		float imaginaryNumber;

	public:
		ComplexNumber(float realNumber, float imaginaryNumber) {
	this->realNumber = realNumber;
	this->imaginaryNumber = imaginaryNumber;
}
				ComplexNumber(){
		realNumber = 0;
	imaginaryNumber = 0;
}


		ComplexNumber add(ComplexNumber one, ComplexNumber two);
		ComplexNumber subtract(ComplexNumber one, ComplexNumber two);
		ComplexNumber multiply(ComplexNumber one, ComplexNumber two);
		ComplexNumber divide(ComplexNumber one, ComplexNumber two);
		
		ComplexNumber negate(ComplexNumber one);
		ComplexNumber conjugation(ComplexNumber one);

		float findReal(ComplexNumber one);
		float findImaginary(ComplexNumber one);
		float magnitude(ComplexNumber one);

};