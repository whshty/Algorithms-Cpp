class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int index = 0;
        
        for(int i = 0; i < board.size(); i++) {
            for(int j = 0; j < board[0].size(); j++) {
                if(board[i][j] == word[index]) {
                    if(dfs(i, j, index, board, word)) return true;
                }
            }
        }
        
        return false;
    }

    bool dfs(int i, int j, int index, vector<vector<char>>& board, string& word) {
        
        if(index == word.size()) return true;
        if(i < 0 or j < 0 or i >= board.size() or j >= board[0].size()) return false;
        
        bool res = false;
        if(word[index] == board[i][j]) {
            char temp = word[index];
            board[i][j] = '#';
            res = dfs(i+1, j, index+1, board, word) || 
                dfs(i-1, j, index+1, board, word) ||
                dfs(i, j+1, index+1, board, word) || 
                dfs(i, j-1, index+1, board, word);
            
            board[i][j] = temp;
        }
        
        return res;
    }

};