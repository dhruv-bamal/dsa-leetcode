class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = INT_MIN, buyDay = prices[0];
        for(int i = 0; i < prices.size(); i++) {
            buyDay = min(buyDay, prices[i]);
            res = max(res, (prices[i] - buyDay));
        }
        return res;
    }
};