#include <iostream>
using namespace std;
// Ques 1: 
string findTarget(const int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return "YES";
        }
    }
    return "NO";
}

// Ques 2: 
int findTargetIndex(const int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i + 1; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {2, 4, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target1 = 6;

    cout << "Does the target exist in the array? " << findTarget(arr, size, target1) << endl;

    int target2 = 6;
    cout << "1-based index of the target in the array: " << findTargetIndex(arr, size, target2) << endl;

    return 0;
}
