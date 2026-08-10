class Solution {
public:
    int maxDepth(string s) {
        int res = INT_MIN;
        int depth = 0;
        for(char c : s) {
            if(c == '(') {
                depth++;
            }
            res = max(res, depth);
            if(c == ')') {
                depth--;
            }
        }
        return res;
    }
};