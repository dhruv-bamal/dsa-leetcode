class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.length(), n = t.length();
        if (n == 0)
            return "";

        unordered_map<char, int> countT, window;
        for (auto& it : t) {
            countT[it]++;
        }

        int have = 0, need = countT.size();
        pair<int, int> res = {-1, -1};
        int resLen = INT_MAX;
        int l = 0;

        for (int r = 0; r < m; r++) {
            char c = s[r];
            window[c]++;

            if (countT.find(c) != countT.end() && window[c] == countT[c]) {
                have++;
            }

            while (have == need) {
                if ((r - l + 1) < resLen) {
                    resLen = r - l + 1;
                    res = {l, r};
                }

                window[s[l]]--;
                if (countT.find(s[l]) != countT.end() &&
                    window[s[l]] < countT[s[l]]) {
                    have--;
                }
                l++;
            }
        }
        return resLen == INT_MAX ? "" : s.substr(res.first, resLen);
    }
};