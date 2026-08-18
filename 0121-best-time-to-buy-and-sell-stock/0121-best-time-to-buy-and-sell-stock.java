class Solution {
    public int maxProfit(int[] prices) {
        int res = Integer.MIN_VALUE;
        int buyDay = prices[0];
        for(int i = 0; i < prices.length; i++) {
            buyDay = Math.min(buyDay, prices[i]);
            res = Math.max(res, prices[i] - buyDay);
        }
        return res;
    }
}