class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0, avg = 0;
        for(int i = 0; i < k; i++) {
            sum += nums[i];
            avg = sum / k;
        }
        double res = avg;
        for(int i = k; i < n; i++) {
            sum += nums[i] - nums[i - k];
            avg = sum / k;
            res = max(res, avg);
        }
        return res;
    }
};