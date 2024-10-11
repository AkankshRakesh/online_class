#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array for max subarray sum: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int maxSum = arr[0], currSum = arr[0];
    for (int i = 1; i < n; i++) {
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }
    cout << "Maximum sum of subarray: " << maxSum << endl;

    int n1, n2;
    cout << "Enter size of nums1: ";
    cin >> n1;
    cout << "Enter size of nums2: ";
    cin >> n2;

    vector<int> n1Arr(n1), n2Arr(n2);
    cout << "Enter elements of nums1: ";
    for (int i = 0; i < n1; i++) {
        cin >> n1Arr[i];
    }
    cout << "Enter elements of nums2: ";
    for (int i = 0; i < n2; i++) {
        cin >> n2Arr[i];
    }

    unordered_map<int, int> ngr;
    stack<int> st;

    for (int i = 0; i < n2; i++) {
        while (!st.empty() && st.top() < n2Arr[i]) {
            ngr[st.top()] = n2Arr[i];
            st.pop();
        }
        st.push(n2Arr[i]);
    }

    vector<int> ans(n1);
    for (int i = 0; i < n1; i++) {
        ans[i] = ngr.count(n1Arr[i]) ? ngr[n1Arr[i]] : -1;
    }

    cout << "Next greater elements: ";
    for (int i = 0; i < n1; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
