class Solution {
public:
    string reverseParentheses(string s) {
        int start = 0, close = 0;
        while(close < s.length()) {
            if(s[close] == '(') {
                start = close;
            }
            if(s[close] == ')') {
                reverse(s.begin() + start + 1, s.begin() + close);
                s.erase(start, 1);
                s.erase(close - 1, 1);
                close = 0;
                continue;
            }
            close++;
        }
        return s;
    }
};