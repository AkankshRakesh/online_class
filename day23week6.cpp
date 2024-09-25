#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
     int n, target;
    cin >> n;
    
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    cin >> target;
    
    sort(arr.begin(), arr.end());
    int left = 0, right = arr.size() - 1;
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            cout << "YES!";
            return 0;
        }
        if(sum > target){
            right--;
        }
        else{
            left++;
        }
    }
    cout << "NO :<";
    return 0;
}