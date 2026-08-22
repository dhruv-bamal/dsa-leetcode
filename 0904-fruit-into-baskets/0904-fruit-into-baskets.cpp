class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int res = INT_MIN, l = 0;
        unordered_map<int, int> freq;
        for(int r = 0; r < fruits.size(); r++) {
            freq[fruits[r]]++;
            if(freq.size() <= 2) {
                res = max(res, r - l + 1);
            }
            while(freq.size() > 2) {
                freq[fruits[l]]--;
                if(freq[fruits[l]] == 0) {
                    freq.erase(fruits[l]);
                }
                l++;
            }
        }
        return res;
    }
};