class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.empty()) return 0;
        if(nums.size() == 1) return nums[0];
        int res = INT_MIN, sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if(sum > res) {
                res = sum;
            }
            if(sum > 0) {
                sum = 0;
            }
        }
        return res;
    }
};