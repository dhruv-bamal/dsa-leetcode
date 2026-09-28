class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> first, second;
        for (int i = 0; i < nums1.size(); i++) {
            if (find(nums2.begin(), nums2.end(), nums1[i]) == nums2.end()) {
                first.insert(nums1[i]);
            }
        }
        for (int i = 0; i < nums2.size(); i++) {
            if (find(nums1.begin(), nums1.end(), nums2[i]) == nums1.end()) {
                second.insert(nums2[i]);
            }
        }
        vector<vector<int>> res;
        res.push_back(vector<int>(first.begin(), first.end()));
        res.push_back(vector<int>(second.begin(), second.end()));
        return res;
    }
};