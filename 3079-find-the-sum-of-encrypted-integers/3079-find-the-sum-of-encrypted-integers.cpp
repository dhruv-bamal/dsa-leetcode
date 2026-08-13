class Solution {
public:
    int encrypt(int x) {
        int maxDigit = INT_MIN, digitCount = 0;
        while(x > 0) {
            int currDigit = x % 10;
            maxDigit = max(maxDigit, currDigit);
            digitCount++;
            x /= 10;
        }
        int res = 0;
        while(digitCount > 0) {
            res = (res * 10) + maxDigit;
            digitCount--;
        }
        return res;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += encrypt(nums[i]);
        }
        return sum;
    }
};