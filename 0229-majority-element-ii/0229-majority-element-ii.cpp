class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int eo, et;
        int co = 0, ct = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (co == 0 && nums[i] != et) {
                co = 1;
                eo = nums[i];
            } else if (ct == 0 && nums[i] != eo) {
                ct = 1;
                et = nums[i];
            } else if (nums[i] == eo) {
                co++;
            } else if (nums[i] == et) {
                ct++;
            } else {
                co--;
                ct--;
            }
        }
        vector<int> res;
        int cov = 0, ctv = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == eo) {
                cov++;
            } else if (nums[i] == et) {
                ctv++;
            }
        }
        if (cov > nums.size() / 3) {
            res.push_back(eo);
        }
        if (ctv > nums.size() / 3) {
            res.push_back(et);
        }
        return res;
    }
};