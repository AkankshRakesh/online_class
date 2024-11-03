#include <vector>
using namespace std;

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int len = arr.size();
        for(int i = 0; i < len / 2; i++){
            int temp = arr[i];
            arr[i] = arr[len - i - 1];
            arr[len - i  - 1] = temp;
        }
    }
};