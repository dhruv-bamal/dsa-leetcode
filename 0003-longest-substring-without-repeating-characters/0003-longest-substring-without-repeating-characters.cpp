class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = INT_MIN, l = 0;
        unordered_set<char> st;
        for(int r = 0; r < s.length(); r++) {
            while(st.count(s[r])) {
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            res = max(res, (int)st.size());
        }
        return res == INT_MIN ? 0 : res;
    }
};