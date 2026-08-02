class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        unordered_map<char, int> count;
        int ans = 0, left = 0, maxi = 0;
        for (int right = 0; right < n; right++) {
            count[s[right]]++;
            maxi = max(maxi, count[s[right]]);
            while ((right - left + 1) - maxi > k) {
                count[s[left]]--;
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};