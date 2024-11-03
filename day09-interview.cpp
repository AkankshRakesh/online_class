#include <queue>
#include <vector>
using namespace std;
class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        priority_queue<int> pq;
        int len = arr.size();
        for(int i = 0; i < len; i++){
            pq.push(arr[i]);
        }
        k = len - k;
        while(k){
            pq.pop();
            k--;
        }
        return pq.top();
    }
};