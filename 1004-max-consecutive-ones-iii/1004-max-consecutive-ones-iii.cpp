class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int res = INT_MIN, zeroCount = 0, l = 0, r = 0;
        while(r < nums.size()) {
            if(nums[r] == 0) {
                zeroCount++;
            }
            while(zeroCount > k) {
                if(nums[l] == 0) {
                    zeroCount--;
                }
                l++;
            }
            if(zeroCount <= k) {
                res = max(res, r - l + 1);
            }
            r++;
        }
        return res;
    }
};