class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if(nums.empty()) {
            return {};
        }
        unordered_map<int, int> freq;
        for(auto &it: nums) {
            freq[it]++;
        }
        vector<int> res;
        for(auto &it: freq) {
            if(it.second > nums.size() / 3) {
                res.push_back(it.first);
            }
        }
        return res;
    }
};