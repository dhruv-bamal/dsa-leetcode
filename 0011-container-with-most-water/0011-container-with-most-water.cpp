class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.empty()) {
            return 0;
        }
        int res = INT_MIN;
        int left = 0, right = height.size() - 1;
        while(left <= right) {
            int wall = min(height[left], height[right]);
            int length = right - left + 1;
            int area = wall * length;
            res = max(res, area);
        }
        return res;
    }
};