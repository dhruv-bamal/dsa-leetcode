class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int eo = 0, co = 0, et = 0, ct = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (co == 0 && nums[i] != et) {
                eo = nums[i];
                co++;
            } else if (ct == 0 && nums[i] != eo) {
                et = nums[i];
                ct++;
            } else if (nums[i] == eo) {
                co++;
            } else if (nums[i] == et) {
                ct++;
            } else {
                co--;
                ct--;
            }
        }
        int cov = 0, ctv = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == eo) {
                cov++;
            } else if (nums[i] == et) {
                ctv++;
            }
        }
        vector<int> res;
        if (cov > nums.size() / 3) {
            res.push_back(eo);
        }
        if (ctv > nums.size() / 3) {
            res.push_back(et);
        }
        return res;
    }
};