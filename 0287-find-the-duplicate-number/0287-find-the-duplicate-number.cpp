class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> freq;
        for(auto &it : nums) {
            if(freq.count(it)) {
                return it;
            }
            freq.insert(it);
        }
        return 0;
    }
};