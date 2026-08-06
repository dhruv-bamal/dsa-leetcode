class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n-1;
        while(left <= right) {
            if(nums[left] == target) {
                return left;
            } else if(nums[right] == target) {
                return right;
            }
            left++;
            right--;
        }
        return -1;
    }
};