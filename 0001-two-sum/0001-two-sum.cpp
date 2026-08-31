class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            int missing = target - nums[i];
            if (hash.find(missing) != hash.end()) {
                return {hash[missing], i};
            }
            hash[nums[i]] = i;
        }
        return {};
    }
};