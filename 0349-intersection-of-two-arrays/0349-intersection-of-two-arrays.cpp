class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_set<int> st;
        for(auto &it : nums1) {
            st.insert(it);
        }
        for(auto &it : nums2) {
            if(st.find(it) != st.end()) {
                res.push_back(it);
                st.erase(it);
            }
        }
        return res;
    }
};