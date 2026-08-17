class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window;
        int low = 0, res = 0;
        for(int high = 0; high < s.length(); high++) {
            while(window.count(s[high])) {
                window.erase(s[low]);
                low++;
            }
            window.insert(s[high]);
            res = max(res, (int)window.size());
        }
        return res;
    }
};