#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int mo = a[0];
        for (int i = 1; i < n; i += 2) {
            mo = max(mo, a[i]);
        }

        int me = a[1];
        for (int i = 2; i < n; i += 2) {
            me = min(me, a[i]);
        }

        cout << max(mo, me) << endl;
    }
    return 0;
}
