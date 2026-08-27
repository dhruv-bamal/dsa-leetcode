class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = INT_MAX, low = 0, high = 0, sum = 0;
        while(high < nums.size()) {
            sum += nums[high];
            while(sum >= target) {
                res = min(res, high - low + 1);
                sum -= nums[low];
                low++;
            }
            high++;
        }
        return res;
    }
};