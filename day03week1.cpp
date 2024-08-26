#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;

    cout << "Enter a number: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        sum += i;
    }

    cout << "The sum of the first " << N << " natural numbers is: " << sum << endl;

    long long factorial = 1;

    for (int i = 1; i <= N; ++i) {
        factorial *= i;
    }

    cout << "The factorial of " << N << " is: " << factorial << endl;

    cout << "\nMultiplication table of " << N << ":" << endl;

    for (int i = 1; i <= 10; ++i) {
        cout << N << " x " << i << " = " << N * i << endl;
    }

    return 0;
}
