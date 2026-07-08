class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs[0].length();
        string ans = "";
        for(int i = 0; i < n; i++) {
            for(auto s: strs) {
                if(s[i] != strs[0][i]) return ans;
            }
            ans += strs[0][i];
        }
        return ans;
    }
};