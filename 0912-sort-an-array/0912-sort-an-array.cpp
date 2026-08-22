class Solution {
public:
    vector<int> merge(vector<int>& left, vector<int>& right) {
        vector<int> res;
        int l = 0, r = 0;
        while(l < left.size() && r < right.size()) {
            if(left[l] <= right[r]) {
                res.push_back(left[l]);
                l++;
            } else {
                res.push_back(right[r]);
                r++;
            }
        }
        while(l < left.size()) {
            res.push_back(left[l]);
            l++;
        }
        while(r < right.size()) {
            res.push_back(right[r]);
            r++;
        }
        return res;
    }

    vector<int> mergeSort(vector<int>& nums, int low, int high) {
        if(low == high) {
            return {nums[low]};
        }
        int mid = low + (high - low) / 2;
        vector<int> left = mergeSort(nums, low, mid);
        vector<int> right = mergeSort(nums, mid + 1, high);
        vector<int> res = merge(left, right);
        return res;
    }

    vector<int> sortArray(vector<int>& nums) {
        if(nums.empty()) {
            return {};
        }
        return mergeSort(nums, 0, nums.size() - 1);
    }
};