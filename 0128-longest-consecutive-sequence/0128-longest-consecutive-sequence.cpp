class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        sort(nums.begin(), nums.end());
        int longest = 1;
        int countCurr = 0;
        int lastSmallest = INT_MIN;
        for(int i = 0; i < n; i++) {
            if(nums[i] - 1 == lastSmallest) {
                countCurr++;
                lastSmallest = nums[i];
            } else if(nums[i] != lastSmallest) {
                countCurr = 1;
                lastSmallest = nums[i];
            }
            longest = max(longest, countCurr);
        }
        return longest;
    }
};