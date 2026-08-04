class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<int> st;
        for(auto &it: nums) {
            st.insert(it);
        }
        int s = nums[0], l = nums[n - 1];
        set<int> count;
        for(int i = s; i <= l; i++) {
            count.insert(i);
        }
        vector<int> res;
        for(auto &it: count) {
            if(st.find(it) == st.end()) {
                res.push_back(it);
            }
        }
        return res;
    }
};