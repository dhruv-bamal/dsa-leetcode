class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int lowRow = 0, highRow = m - 1;
        int row = -1;

        while (lowRow <= highRow) {
            int midRow = lowRow + (highRow - lowRow) / 2;
            if (target < matrix[midRow][0]) {
                highRow = midRow - 1;
            } else if (target > matrix[midRow][n - 1]) {
                lowRow = midRow + 1;
            } else {
                row = midRow;
                break;
            }
        }

        if (row == -1) {
            return false;
        }

        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (matrix[row][mid] == target) {
                return true;
            } else if (matrix[row][mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return false;
    }
};