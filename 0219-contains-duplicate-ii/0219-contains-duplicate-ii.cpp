class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> window;
        int low = 0;
        for(int high = 0; high < n; high++) {
            if(high - low > k) {
                window.erase(nums[low]);
                low++;
            }
            if(window.find(nums[high]) != window.end()) {
                return true;
            }
            window.insert(nums[high]);
        }
        return false;
    }
};