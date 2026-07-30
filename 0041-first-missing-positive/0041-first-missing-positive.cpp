class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // Declare a set, declare a positive variable to 1, if the variable is present in the set increment it until missing positive is not found.
        int n = nums.size(), firstPos = 1;
        set<int> positive;
        for(int i = 0; i < n; i++) {
            if(nums[i] > 0) {
                positive.insert(nums[i]);
            }
        }
        for(int i = 0; i <= n + 1; i++) {
            if(positive.find(firstPos) == positive.end()) {
                return firstPos;
            }
            firstPos++;
        }
        return -1;
    }
};