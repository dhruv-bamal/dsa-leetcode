class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(auto &it : nums) {
            if(seen.find(it) != seen.end()) {
                return true;
            }
            seen.insert(it);
        }
        return false;
    }
};