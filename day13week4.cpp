#include <iostream>
using namespace std;

int main() {
    int* dyint = new int; 
    *dyint = 42; 

    cout << "Value of dynamic integer: " << *dyint << endl;

    int* dyarr = new int[5];  
    for (int i = 0; i < 5; i++) {
        dyarr[i] = i + 1;  
    }

    cout << "Dynamic array values: ";
    for (int i = 0; i < 5; i++) {
        cout << dyarr[i] << " ";
    }
    cout << endl;

    delete dyint; 
    delete[] dyarr; 

    return 0;
}
