class Solution {
public:
    bool isPeak(int number, int top, int bottom, int left, int right) {
        return (number > top) && (number > bottom) && (number > left) &&
               (number > right);
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int top = (i > 0) ? mat[i - 1][j] : -1;
                int bottom = (i < m - 1) ? mat[i + 1][j] : -1;
                int left = (j > 0) ? mat[i][j - 1] : -1;
                int right = (j < n - 1) ? mat[i][j + 1] : -1;
                if (isPeak(mat[i][j], top, bottom, left, right)) {
                    return {i, j};
                }
            }
        }
        return {-1, -1};
    }
};