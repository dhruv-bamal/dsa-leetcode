class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window;
        int res = INT_MIN, i = 0;
        for(int j = 0; j < s.length(); j++) {
            while(window.count(s[j])) {
                window.erase(s[i]);
                i++;
            }
            window.insert(s[j]);
            res = max(res, (int)window.size());
        }
        return res == INT_MIN ? 0 : res;
    }
};