class Solution {
public:
    int calculateDigitSum(int number) {
        if (number < 10)
            return number;
        int sum = 0;
        while (number > 0) {
            sum += number % 10;
            number /= 10;
        }
        return sum;
    }

    int smallestIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int digitSum = calculateDigitSum(nums[i]);
            if (digitSum == i)
                return i;
        }
        return -1;
    }
};