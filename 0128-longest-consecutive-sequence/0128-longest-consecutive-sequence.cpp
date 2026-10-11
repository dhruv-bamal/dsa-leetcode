class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) {
            return 0;
        }
        unordered_set<int> st(nums.begin(), nums.end());
        int res = 1;
        for(auto& it: st) {
            if(st.find(it - 1) == st.end()) {
                int count = 1, num = it;
                while(st.find(num + 1) != st.end()) {
                    count++;
                    num++;
                }
                res = max(res, count);
            }
        }
        return res;
    }
};