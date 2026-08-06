class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int minimum = INT_MAX;
        int low = 0, high = n - 1;
        while(low <= high) {
            int mini = min(nums[low], nums[high]);
            minimum = min(minimum, mini);
            low++;
            high--;
        }
        return minimum;
    }
};