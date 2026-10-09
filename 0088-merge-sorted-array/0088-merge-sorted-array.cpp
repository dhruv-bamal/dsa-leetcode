class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l = 0, r = 0;
        vector<int> res;
        while (l < m && r < n) {
            if (nums1[l] <= nums2[r]) {
                res.push_back(nums1[l]);
                l++;
            } else {
                res.push_back(nums2[r]);
                r++;
            }
        }
        while (l < m) {
            res.push_back(nums1[l]);
            l++;
        }
        while (r < n) {
            res.push_back(nums2[r]);
            r++;
        }
        for (int i = 0; i < res.size(); i++) {
            nums1[i] = res[i];
        }
    }
};