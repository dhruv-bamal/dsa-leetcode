class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int m = s.length(), n = p.length();
        vector<int> res;
        if(n > m) {
            return res;
        }
        vector<int> countP(26, 0);
        for(int i = 0; i < n; i++) {
            countP[p[i] - 'a']++;
        }
        vector<int> countS(26, 0);
        for(int i = 0; i < n; i++) {
            countS[s[i] - 'a']++;
            if(countS == countP) {
                res.push_back(i - n + 1);
            }
        }
        for(int i = n; i < m; i++) {
            countS[s[i] - 'a']++;
            countS[s[i - n] - 'a']--;
            if(countS == countP) {
                res.push_back(i - n + 1);
            }
        }
        return res;
    }
};