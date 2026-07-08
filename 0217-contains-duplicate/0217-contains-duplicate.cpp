class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        bool present = false;
        for(int i = 0; i < n; i++) {
            if(st.find(nums[i]) != st.end()) present = true; 
            else st.insert(nums[i]);
        }
        return present;
    }
};