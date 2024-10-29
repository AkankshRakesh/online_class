#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
  public:
    int findMinDiff(vector<int> arr, int m) {
        sort(arr.begin(), arr.end());
        int left = 0, min = INT_MAX;
        for(int i = m - 1; i < arr.size(); i++){
            if(arr[i] - arr[left] < min) min = arr[i] - arr[left];
            left++;
        }
        return min;
    }
};