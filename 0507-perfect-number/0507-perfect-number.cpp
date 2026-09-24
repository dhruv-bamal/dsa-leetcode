class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int> divisors;
        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0)
                divisors.push_back(i);
        }
        int sum = 0;
        for (int i = 0; i < divisors.size(); i++) {
            sum += divisors[i];
        }
        if (sum == num)
            return true;
        return false;
    }
};