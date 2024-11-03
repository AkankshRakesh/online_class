#include <vector>
#include <climits>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int max = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(sum < 0) sum = 0;
            sum += nums[i];
            if(max < sum) max = sum;
        }
        return max;
    }
};