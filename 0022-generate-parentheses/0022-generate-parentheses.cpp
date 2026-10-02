class Solution {
public:
    bool isValid(const string& s) {
        int bal = 0;
        for (char c : s) {
            bal += (c == '(') ? 1 : -1;
            if (bal < 0)
                return false;
        }
        return bal == 0;
    }

    void generate(string& cur, int n, vector<string>& res) {
        if (cur.size() == 2 * n) {
            if (isValid(cur))
                res.push_back(cur);
            return;
        }
        cur.push_back('(');
        generate(cur, n, res);
        cur.pop_back();

        cur.push_back(')');
        generate(cur, n, res);
        cur.pop_back();
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string cur;
        generate(cur, n, res);
        return res;
    }
};