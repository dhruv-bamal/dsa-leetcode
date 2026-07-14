class Solution {
public:

    string removeUnvalid(string s) {
        for(int i = 0; i < s.length(); i++) {
            if(!isalnum(s[i])) {
                s.erase(i, 1);
                i--;
            } else {
                s[i] = tolower(s[i]);
            }
        }
        return s;
    }

    bool palindrome(string &s, int left, int right) {
        if(left >= right) {
            return true;
        } else if(s[left] != s[right]) {
            return false;
        }
        return palindrome(s, left + 1, right - 1);
    }

    bool isPalindrome(string s) {
        string str = removeUnvalid(s);
        bool ans = palindrome(str, 0, str.length() - 1);
        return ans;
    }
};