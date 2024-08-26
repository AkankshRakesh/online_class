#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator + (const Complex &other) {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator - (const Complex &other) {
        return Complex(real - other.real, imag - other.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    int num1, num2;

    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "Division: " << static_cast<double>(num1) / num2 << endl;
    } else {
        cout << "Error: Division by zero is not allowed!" << endl;
    }

    if (num2 != 0) {
        cout << "Modulus: " << num1 % num2 << endl;
    } else {
        cout << "Error: Modulus by zero is not allowed!" << endl;
    }

    Complex c1(3, 4);
    Complex c2(1, 2);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    cout << "\nComplex Number 1: "; c1.display();
    cout << "Complex Number 2: "; c2.display();
    cout << "Sum: "; sum.display();
    cout << "Difference: "; diff.display();

    return 0;
}
