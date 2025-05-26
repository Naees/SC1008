/*2. (Operator Overloading) [10 marks] You are asked to implement a class called
Complex that allows arithmetic operations on complex numbers. In mathematics, a
complex number is written as:

a + bi

where a is the real part and b is the imaginary part. Below are the detailed members of

Complex:
    • Private Members:
        o double real: the real part of the complex number.
        o double imag: the imaginary part.

    • Public Members:
        o Constructor that initializes real and imaginary parts.
        o Operator Overloading:
            § operator+, which adds two complex numbers.
            § operator-, which subtracts two complex numbers.
            § operator<<, which prints the complex number in a + bi format.

    Your tasks are as follows:
    • Overload the + operator to allow addition of two complex numbers.
    • Overload the - operator to allow subtraction of two complex numbers.
    • Overload the << operator to print a complex number in a + bi format*/

#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r, double i) : real(r), imag(i) {}

    // Overloading the + operator
    // TODO: Write Your Code Here
    Complex operator+ (const Complex& c){
        return Complex(real + c.real, imag + c.imag);
    }

    // Overloading the - operator
    // TODO: Write Your Code Here
    Complex operator- (const Complex& c){
        return Complex(real - c.real, imag - c.imag);
    }


    // Overloading the << operator for output
    friend std::ostream& operator<<(std::ostream& out, const Complex& c) {
        // TODO: Write Your Code Here
        out << c.real;
        if (c.imag >= 0) {
            out << " + " << c.imag << "i";
        } else {
            out << " - " << -c.imag << "i";
        }
        return out;
    }
};

int main() {
    Complex c1(3.5, 2.0);
    Complex c2(1.5, 4.0);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    std::cout << "First Complex Number: " << c1 << std::endl;
    std::cout << "Second Complex Number: " << c2 << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << diff << std::endl;

    return 0;
}
