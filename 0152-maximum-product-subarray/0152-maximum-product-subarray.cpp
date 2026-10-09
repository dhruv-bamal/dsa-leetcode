class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = nums[0], maxi = nums[0], mini = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < 0) {
                swap(maxi, mini);
            }
            maxi = max(nums[i], nums[i] * maxi);
            mini = min(nums[i], nums[i] * mini);
            res = max(res, maxi);
        }
        return res;
    }
};