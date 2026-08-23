class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> hash;
        for(auto &it : nums) {
            hash[it]++;
        }
        vector<int> res;
        for(auto &it : hash) {
            if(it.second > nums.size() / 3) {
                res.push_back(it.first);
            }
        }
        return res;
    }
};