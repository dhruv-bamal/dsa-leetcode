class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int m = s.length(), n = p.length();
        vector<int> freq(26, 0);
        for(char &c : p) {
            freq[c - 'a']++;
        }
        vector<int> res;
        for(int i = 0; i <= m - n; i++) {
            vector<int> temp(26, 0);
            for(int j = i; j < i + n; j++) {
                temp[s[j] - 'a']++;
            }
            if(temp == freq) {
                res.push_back(i);
            }
        }
        return res;
    }
};