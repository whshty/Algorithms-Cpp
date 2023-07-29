class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Check row
        for (int i = 0; i < 9; i++) {
            unordered_set<char> set;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.' && set.find(board[i][j]) != set.end()){
                    return false;
                }
                set.insert(board[i][j]);
            }
        }

        for (int i = 0; i < 9; i++) {
            unordered_set<char> set;
            for (int j = 0; j < 9; j++) {
                if (board[j][i] != '.' && set.find(board[j][i]) != set.end()) {
                    return false;
                }
                set.insert(board[j][i]);
            }
        }

        vector<unordered_set<char>> sets(9);
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                int index = (i / 3) * 3 + j /3;
                if (board[i][j] != '.' && sets[index].find(board[i][j]) != sets[index].end()) {
                    return false;
                }
                sets[index].insert(board[i][j]);
            }
        }
        return true;
        
    }
};