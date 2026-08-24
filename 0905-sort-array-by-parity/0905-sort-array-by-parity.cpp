class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        if(nums.empty()) return {};
        if(nums.size() == 1) return nums;
        vector<int> res;
        for(int even : nums) {
            if(even % 2 == 0) {
                res.push_back(even);
            }
        }
        for(int odd : nums) {
            if(odd % 2 != 0) {
                res.push_back(odd);
            }
        }
        return res;
    }
};