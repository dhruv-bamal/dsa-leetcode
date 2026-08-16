class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        int left = 0, right = 0;
        while(left < word1.length() && right < word2.length()) {
            res += word1[left];
            res += word2[right];
            left++;
            right++;
        }
        while(left < word1.length()) {
            res += word1[left];
            left++;
        }
        while(right < word2.length()) {
            res += word2[right];
            right++;
        }
        return res;
    }
};