#include <vector>
using namespace std;
class Solution {
  public:
    void merge(vector<int>& arr, int l, int mid, int r){
        int n1 = mid - l + 1;
        int n2 = r - mid;
        
        int *left = new int[n1];
        int *right = new int[n2];
        
        for(int i = 0; i < n1; i++){
            left[i] = arr[l + i];
        }
        for(int j = 0; j < n2; j++){
            right[j] = arr[mid + 1 + j];
        }
        
        int i = 0, j = 0, k = l;
        while(i < n1 && j < n2){
            if(left[i] <= right[j]){
                arr[k++] = left[i++];
            }
            else{
                arr[k++] = right[j++];
            }
        }
        while(i < n1){
            arr[k++] = left[i++];
        }
        while(j < n2){
            arr[k++] = right[j++];
        }
    }
    void mergeSort(vector<int>& arr, int l, int r){
        if(l < r){
            int mid = l + (r - l)/2;
            mergeSort(arr, l, mid);
            mergeSort(arr, mid + 1, r);
            merge(arr, l, mid , r);
        }
    }
    bool checkDuplicates(vector<int> &arr) {
        mergeSort(arr, 0, arr.size() - 1);
        int left = 0;
        for(int right = 1; right < arr.size() ; right++){
            if(arr[left] == arr[right]) return true;
            left++;
        }
        return false;
    }
};
