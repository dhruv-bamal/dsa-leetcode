class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double winSum = 0, winAvg = 0;
        for(int i = 0; i < k; i++) {
            winSum += nums[i];
            winAvg = winSum/k;
        }
        double res = winAvg;
        for(int i = k; i < n; i++) {
            winSum += nums[i];
            winSum -= nums[i - k];
            winAvg = winSum/k;
            res = max(res, winAvg);
        }
        return res;
    }
};