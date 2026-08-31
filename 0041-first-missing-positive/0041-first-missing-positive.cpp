class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int firstPos = 1;
        set<int> positives;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0)
                positives.insert(nums[i]);
        }
        for (int i = 0; i <= nums.size() + 1; i++) {
            if (positives.find(firstPos) == positives.end())
                return firstPos;
            firstPos++;
        }
        return 0;
    }
};