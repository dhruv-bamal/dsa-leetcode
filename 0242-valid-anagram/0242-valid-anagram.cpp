class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) {
            return false;
        }
        vector<int> countS(26, 0), countT(26, 0);
        for(int i = 0; i < s.length(); i++) {
            countS[s[i] - 'a']++;
        }
        for(int i = 0; i < t.length(); i++) {
            countT[t[i] - 'a']++;
        }
        return countS == countT;
    }
};