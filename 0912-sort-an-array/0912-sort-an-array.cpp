class Solution {
public:
    vector<int> merge(vector<int>& left, vector<int>& right) {
        vector<int> res;
        int i = 0, j = 0;
        while (i < left.size() && j < right.size()) {
            if (left[i] <= right[j]) {
                res.push_back(left[i]);
                i++;
            } else {
                res.push_back(right[j]);
                j++;
            }
        }
        while (i < left.size()) {
            res.push_back(left[i]);
            i++;
        }
        while (j < right.size()) {
            res.push_back(right[j]);
            j++;
        }
        return res;
    }

    vector<int> mergeSort(vector<int>& nums, int low, int high) {
        if (low == high) {
            return {nums[low]};
        }
        int mid = low + (high - low) / 2;
        vector<int> left = mergeSort(nums, low, mid);
        vector<int> right = mergeSort(nums, mid + 1, high);
        vector<int> merged = merge(left, right);
        return merged;
    }

    vector<int> sortArray(vector<int>& nums) {
        if (nums.size() == 0) {
            return {};
        }
        return mergeSort(nums, 0, nums.size() - 1);
    }
};