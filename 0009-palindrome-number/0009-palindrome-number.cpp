class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        if(x >= 0 && x <= 9) return true;
        long long num = x, revNum = 0;
        while(num > 0) {
            revNum = 1LL * (revNum * 10) + (num % 10);
            num /= 10;
        }
        return revNum == x;
    }
};