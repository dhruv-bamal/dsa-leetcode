
class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1,
                               int k2) {
        int n = nums1.size();
        int maxDiff = 0;
        for (int i = 0; i < n; i++) {
            maxDiff = max(maxDiff, abs(nums1[i] - nums2[i]));
        }
        vector<long long> freq(maxDiff + 1, 0);
        for (int i = 0; i < n; i++) {
            int diff = abs(nums1[i] - nums2[i]);
            freq[diff]++;
        }
        long long k = (long long)k1 + k2;
        for (int i = maxDiff; i > 0 && k > 0; i--) {
            long long operations = min(k, freq[i]);
            freq[i] -= operations;
            freq[i - 1] += operations;
            k -= operations;
        }
        long long ans = 0;
        for (int i = 1; i <= maxDiff; i++) {
            ans += 1LL * i * i * freq[i];
        }
        return ans;
    }
};
