class Solution {
public:
    int maxArea(vector<int>& height) {
        if (height.empty())
            return 0;
        int res = INT_MIN, left = 0, right = height.size() - 1;
        while (left < right) {
            int minWall = min(height[left], height[right]);
            int length = right - left;
            int area = minWall * length;
            res = max(res, area);
            if (height[left] < height[right]) {
                left++;
            } else if (height[left] > height[right]) {
                right--;
            } else {
                left++;
                right--;
            }
        }
        return res == INT_MIN ? 0 : res;
    }
};