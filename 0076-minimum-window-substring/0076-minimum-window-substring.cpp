class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.length(), n = t.length();
        if (m < n)
            return "";
        unordered_map<char, int> hash(256);
        for (char& c : t) {
            hash[c]++;
        }
        int l = 0, r = 0, count = 0, sIndex = -1, minLen = INT_MAX;
        while(r < m) {
            if(hash[s[r]] > 0) {
                count++;
            }
            hash[s[r]]--;
            while(count == n) {
                if(r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    sIndex = l;
                }
                hash[s[l]]++;
                if(hash[s[l]] > 0) {
                    count--;
                }
                l++;
            }
            r++;
        }
        return sIndex == -1 ? "" : s.substr(sIndex, minLen);
    }
};