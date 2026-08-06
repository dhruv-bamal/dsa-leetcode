class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1;
        while (left <= right) {
            if (nums[left] == target) {
                return true;
            } else if (nums[right] == target) {
                return true;
            }
            left++;
            right--;
        }
        return false;
    }
};