#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n;
    
    cin >> n;
    
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        
    }
    int max = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            count++;
        }
        else{
            max = max > count ? max : count;
            count = 0;
        }
        // cout << arr[i] << " ";
    }
    max = max > count ? max : count;
    cout << max;
    return 0;
}