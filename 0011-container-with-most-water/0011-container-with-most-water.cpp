class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = INT_MIN;
        int left = 0, right = height.size() - 1;
        while(left < right) {
            int length = right - left;
            int vol = min(height[left], height[right]) * length;
            res = max(res, vol);
            left++;
            right--;
        }
        return res;
    }
};