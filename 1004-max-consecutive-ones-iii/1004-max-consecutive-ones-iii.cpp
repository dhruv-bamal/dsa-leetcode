class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int res = INT_MIN, zeroCount = 0, l = 0;
        for(int r = 0; r < nums.size(); r++) {
            if(nums[r] == 0) {
                zeroCount++;
            }
            if(zeroCount > k) {
                if(nums[l] == 0) {
                    zeroCount--;
                }
                l++;
            }
            if(zeroCount <= k) {
                res = max(res, r - l + 1);
            }
        }
        return res;
    }
};