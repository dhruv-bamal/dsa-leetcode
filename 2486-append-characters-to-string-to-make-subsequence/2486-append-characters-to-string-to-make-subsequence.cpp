class Solution {
public:
    int appendCharacters(string s, string t) {
        int left = 0, right = 0;
        while (left < s.length()) {
            if (s[left] == t[right]) {
                left++;
                right++;
            } else {
                left++;
            }
        }
        return t.length() - right;
    }
};