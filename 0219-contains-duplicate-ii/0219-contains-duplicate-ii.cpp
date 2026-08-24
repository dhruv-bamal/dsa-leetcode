class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;
        int low = 0;
        for(int high = 0; high < nums.size(); high++) {
            if(high - low > k) {
                window.erase(nums[low]);
                low++;
            }
            if(window.count(nums[high])) {
                return true;
            }
            window.insert(nums[high]);
        }
        return false;
    }
};