class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = INT_MIN, left = 0, right = height.size() - 1;
        while (left < right) {
            int length = right - left;
            int wall = min(height[left], height[right]);
            int area = length * wall;
            res = max(res, area);
            if (height[left] < height[right])
                left++;
            else if (height[left] > height[right])
                right--;
            else {
                left++;
                right--;
            }
        }
        return res;
    }
};