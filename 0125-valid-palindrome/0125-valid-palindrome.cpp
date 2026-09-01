class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0; i < s.length(); i++) {
            if (!isalnum(s[i])) {
                s.erase(i, 1);
                i--;
            } else {
                s[i] = tolower(s[i]);
            }
        }
        int low = 0, high = s.length() - 1;
        while (low <= high) {
            if (s[low] != s[high])
                return false;
            low++;
            high--;
        }
        return true;
    }
};