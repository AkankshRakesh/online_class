#include <iostream>
using namespace std;

int fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int sumDigits(int n) {
    if (n == 0) return 0;
    return n % 10 + sumDigits(n / 10);
}

int main() {
    int n1 = 5;
    cout << "Factorial of " << n1 << " is: " << fact(n1) << endl;

    int n2 = 6;
    cout << "Fibonacci of " << n2 << " is: " << fib(n2) << endl;

    int n3 = 1234;
    cout << "Sum of digits of " << n3 << " is: " << sumDigits(n3) << endl;

    return 0;
}
