class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int low = 0;
        for(int high = 1; high < nums.size(); high++) {
            if(nums[high] != nums[low]) {
                nums[low + 1] = nums[high];
                low++;
            }
        }
        return low + 1;
    }
};