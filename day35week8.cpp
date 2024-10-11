#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> stations(n);
        for (int i = 0; i < n; i++) {
            cin >> stations[i];
        }
        
        int max_distance = stations[0]; // Distance from 0 to the first gas station
        for (int i = 1; i < n; i++) {
            max_distance = max(max_distance, stations[i] - stations[i - 1]); // Distance between consecutive gas stations
        }
        max_distance = max(max_distance, x - stations[n - 1]); // Distance from the last gas station to x
        
        cout << max_distance << endl; // Minimum gas tank capacity needed
    }
    return 0;
}
