class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (auto& it : nums) {
            freq[it]++;
        }
        vector<pair<int, int>> pairs;
        for (auto& it : freq) {
            pairs.push_back({it.second, it.first});
        }
        sort(pairs.rbegin(), pairs.rend());
        vector<int> res;
        for (auto& it : pairs) {
            if (k == 0)
                break;
            res.push_back(it.second);
            k--;
        }
        return res;
    }
};