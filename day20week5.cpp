#include <iostream>
#include <algorithm>
using namespace std;

void rotate90(int image[][3], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < m; j++) {
            swap(image[i][j], image[j][i]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m / 2; j++) {
            swap(image[i][j], image[i][m - j - 1]);
        }
    }
}

void sort2DArray(int arr[][3], int n, int m) {
    int temp[n * m];
    int index = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            temp[index++] = arr[i][j];
        }
    }

    sort(temp, temp + (n * m));

    index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = temp[index++];
        }
    }
}

void print2DArray(int arr[][3], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 3, m = 3;
    int image[3][3], arr[3][3];

    cout << "Enter the elements of the image (3x3 matrix):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> image[i][j];
        }
    }

    rotate90(image, n, m);
    cout << "Image after 90 degree rotation:" << endl;
    print2DArray(image, n, m);

    cout << "Enter the elements of the 2D array (3x3 matrix):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    sort2DArray(arr, n, m);
    cout << "2D array after sorting:" << endl;
    print2DArray(arr, n, m);

    return 0;
}
