class Solution {
public:
    bool isValid(string s) {
        stack<int> stack;
        unordered_map<char, char> mp = {{')', '('}, {'}', '{'}, {']', '['}};
        for (char& c : s) {
            if (mp.find(c) != mp.end()) {
                if (!stack.empty() && stack.top() == mp[c]) {
                    stack.pop();
                } else {
                    return false;
                }
            } else {
                stack.push(c);
            }
        }
        return stack.empty();
    }
};