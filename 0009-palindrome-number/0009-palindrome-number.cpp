class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        long long revNum = 0;
        while(n > 0) {
            int digit = n % 10;
            n /= 10;
            revNum = (revNum * 10) + digit;
        }
        if(revNum == x) return true;
        else return false;
    }
};