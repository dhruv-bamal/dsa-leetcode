class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = INT_MIN;
        int buyDay = prices[0];
        for(int i = 0; i < n; i++) {
            buyDay = min(buyDay, prices[i]);
            int profit = prices[i] - buyDay;
            maxProfit = max(maxProfit, profit);
        }
        return maxProfit;
    }
};