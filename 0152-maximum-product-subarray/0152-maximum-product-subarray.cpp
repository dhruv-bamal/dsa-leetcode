class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = nums[0], maxPro = nums[0], minPro = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < 0)
                swap(maxPro, minPro);
            maxPro = max(nums[i], nums[i] * maxPro);
            minPro = min(nums[i], nums[i] * minPro);
            res = max(res, maxPro);
        }
        return res;
    }
};