class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(auto &it: nums) {
            st.insert(it);
        }
        int res = 0;
        for(auto &it: st) {
            if(st.find(it - 1) == st.end()) {
                int countCurr = 1;
                int lastSmallest = it;
                while(st.find(lastSmallest + 1) != st.end()) {
                    countCurr++;
                    lastSmallest++;
                }
                res = max(res, countCurr);
            }
        }
        return res;
    }
};