class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        if(n == 0) return true;
        string str = "";
        for(int i = 0; i < n; i++) {
            char c = tolower(s[i]);
            if(isalnum(c)) {
                str += c;
            }
        }
        string rev = str;
        reverse(rev.begin(), rev.end());
        if(rev == str) return true;
        else return false;
    }
};