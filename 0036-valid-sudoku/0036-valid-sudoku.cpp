class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int row = 0; row < 9; row++) {
            unordered_set<int> st;
            for (int i = 0; i < 9; i++) {
                if (board[row][i] == '.')
                    continue;
                if (st.find(board[row][i]) != st.end()) {
                    return false;
                }
                st.insert(board[row][i]);
            }
        }
        for (int col = 0; col < 9; col++) {
            unordered_set<int> st;
            for (int i = 0; i < 9; i++) {
                if (board[i][col] == '.')
                    continue;
                if (st.find(board[i][col]) != st.end()) {
                    return false;
                }
                st.insert(board[i][col]);
            }
        }
        for (int block = 0; block < 9; block++) {
            unordered_set<int> st;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int row = (block / 3) * 3 + i;
                    int col = (block % 3) * 3 + j;
                    if (board[row][col] == '.')
                        continue;
                    if (st.find(board[row][col]) != st.end()) {
                        return false;
                    }
                    st.insert(board[row][col]);
                }
            }
        }
        return true;
    }
};