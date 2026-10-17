class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int windowSum = 0;
        for(int i = 0; i < k; i++) {
            windowSum += cardPoints[i];
        }
        int maxSum = windowSum;
        for(int i = 0; i < k; i++) {
            windowSum -= cardPoints[k - 1 - i];
            windowSum += cardPoints[cardPoints.size() - 1 - i];
            maxSum = max(maxSum, windowSum);
        }
        return maxSum;
    }
};