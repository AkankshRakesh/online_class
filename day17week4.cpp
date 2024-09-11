#include <iostream>
using namespace std;

int main() {
    int rows, cols, key;
    cout << "Enter Rows: ";
    cin >> rows;
    cout << "Enter Cols: ";
    cin >> cols;

    int arr[rows][cols];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> arr[i][j];
        }
    }
    cout << "Enter the key: ";
    cin >> key;

    bool found = false;
    int sum = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] == key) {
                found = true;
            }
            sum += arr[i][j];
        }
    }

    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
