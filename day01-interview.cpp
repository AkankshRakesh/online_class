#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int min = INT_MAX, max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
}