class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element = 0, count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (count == 0) {
                element = nums[i];
                count++;
            } else if (nums[i] == element) {
                count++;
            } else {
                count--;
            }
        }
        int cv = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == element) {
                cv++;
            }
        }
        if (cv > nums.size() / 2) {
            return element;
        }
        return -1;
    }
};