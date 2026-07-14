class Solution {
public:

    static bool compare(pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int, int> mp;
        for (auto& it : nums) {
            mp[it]++;
        }

        vector<pair<int, int>> pair(mp.begin(), mp.end());

        sort(pair.begin(), pair.end(), compare);

        vector<int> result;

        for(int i = 0; i < k; i++) {
            result.push_back(pair[i].first);
        }

        return result;
    }
};