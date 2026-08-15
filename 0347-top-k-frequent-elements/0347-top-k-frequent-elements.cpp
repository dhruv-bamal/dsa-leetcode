class Solution {
public:
    static bool compare(pair<int, int>& a, pair<int, int>& b) {
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(auto &it: nums) {
            freq[it]++;
        }
        vector<pair<int, int>> pair(freq.begin(), freq.end());
        sort(pair.begin(), pair.end(), compare);
        vector<int> res;
        for(int i = 0; i < k; i++) {
            res.push_back(pair[i].first);
        }
        return res;
    }
};