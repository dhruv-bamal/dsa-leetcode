class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double windowSum = 0;
        for(int i = 0; i < k; i++) {
            windowSum += nums[i];
        }
        double windowAvg = windowSum / k;
        for(int i = k; i < nums.size(); i++) {
            windowSum += nums[i];
            windowSum -= nums[i - k];
            windowAvg = max(windowAvg, windowSum / k);
        }
        return windowAvg;
    }
};