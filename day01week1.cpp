#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2, concatenatedString;

    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    concatenatedString = str1 + str2;
    cout << "Concatenated string: " << concatenatedString << endl;

    int grade1, grade2, grade3, grade4, grade5;
    float average;

    cout << "\nEnter grade 1: ";
    cin >> grade1;
    cout << "Enter grade 2: ";
    cin >> grade2;
    cout << "Enter grade 3: ";
    cin >> grade3;
    cout << "Enter grade 4: ";
    cin >> grade4;
    cout << "Enter grade 5: ";
    cin >> grade5;

    average = (grade1 + grade2 + grade3 + grade4 + grade5) / 5.0;
    cout << "The average grade is: " << average << endl;

    int number, square;

    cout << "\nEnter a number: ";
    cin >> number;

    square = number * number;
    cout << "The square of " << number << " is: " << square << endl;

    return 0;
}
