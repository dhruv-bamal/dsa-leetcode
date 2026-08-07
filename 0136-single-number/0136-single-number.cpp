class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        unordered_map<int, int> mp;
        for(auto &it: nums) {
            mp[it]++;
        }
        for(auto &it: mp) {
            if(it.second == 1) {
                return it.first;
            }
        }
        return -1;
    }
};