class Solution {
public:
    int findMax(vector<int>& piles) {
        int n = piles.size();
        int maxi = piles[0];
        for (auto& it : piles) {
            maxi = max(maxi, it);
        }
        return maxi;
    }

    long long findTotalHours(vector<int>& piles, int h) {
        int n = piles.size();
        long long totalH = 0;
        for (auto& it : piles) {
            totalH += ceil((double)it / (double)h);
        }
        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = findMax(piles);
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long totalHours = findTotalHours(piles, mid);
            if (totalHours <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};