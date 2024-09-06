#include <iostream>
using namespace std;
int main() {
    // Ques 1
    int var = 42;
    int* ptr = &var;

    cout << "Value of the variable using the variable itself: " << var << endl;
    cout << "Value of the variable using the pointer: " << *ptr << endl;

    cout << "---------------------------------" << endl;

    // Ques 2
    int arr[] = {10, 20, 30, 40, 50};
    int* arrPtr = arr;

    cout << "Array elements using pointer arithmetic: ";
    for (int i = 0; i < 5; i++) {
        cout << *(arrPtr + i) << " ";
    }
    cout << endl;

    cout << "---------------------------------" << endl;

    // Ques 3
    int num = 100;
    int* numPtr = &num;
    int** ptrToPtr = &numPtr;

    cout << "Value using the variable: " << num << endl;
    cout << "Value using the pointer: " << *numPtr << endl;
    cout << "Value using the pointer to pointer: " << **ptrToPtr << endl;

    return 0;
}
