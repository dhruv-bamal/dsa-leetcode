class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = candies[0];
        for (int i = 0; i < candies.size(); i++) {
            maxi = max(maxi, candies[i]);
        }
        vector<bool> res;
        for (int i = 0; i < candies.size(); i++) {
            res.push_back(candies[i] + extraCandies >= maxi);
        }
        return res;
    }
};