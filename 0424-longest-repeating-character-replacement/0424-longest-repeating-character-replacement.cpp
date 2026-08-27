class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> hash;
        int res = INT_MIN, low = 0, high = 0, maxi = 0;
        while(high < s.length()) {
            hash[s[high]]++;
            maxi = max(maxi, hash[s[high]]);
            while((high - low + 1) - maxi > k) {
                hash[s[low]]--;
                low++;
            }
            res = max(res, high - low + 1);
            high++;
        }
        return res;
    }
};