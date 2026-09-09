class Solution {
public:
    long long countCommas(long long n) {
        long long res = 0;
        res += max(0LL, n - 1000000LL + 1);
        res += max(0LL, n - 1000000000LL + 1);
        res += max(0LL, n - 1000000000000LL + 1);
        res += max(0LL, n - 1000000000000000LL + 1);
        return n < 1000 ? 0 : n - 1000L + 1 + res;
    }
};