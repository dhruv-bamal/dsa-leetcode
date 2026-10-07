class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }
        vector<pair<int, int>> pairs;
        for (auto& it : hash) {
            pairs.push_back({it.second, it.first});
        }
        sort(pairs.rbegin(), pairs.rend());
        vector<int> res;
        for (auto& it : pairs) {
            res.push_back(it.second);
            k--;
            if (k == 0) {
                break;
            }
        }
        return res;
    }
};