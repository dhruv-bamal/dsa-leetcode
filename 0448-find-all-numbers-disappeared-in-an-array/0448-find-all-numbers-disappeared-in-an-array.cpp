class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> st;
        for (int i = 1; i <= nums.size(); i++) {
            st.insert(i);
        }
        for (int i = 0; i < nums.size(); i++) {
            if (st.find(nums[i]) != st.end())
                st.erase(nums[i]);
        }
        return vector<int>(st.begin(), st.end());
    }
};