class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '1') {
                    count++;
                    dfs(grid,  i, j);
                }
            }
        }
        
        return count;
    }

     void dfs(vector<vector<char>>& grid, int row, int col) {
        if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size() || grid[row][col] != '1') {
            return;
        }
        
        // Mark the current cell as visited
        grid[row][col] = '2';
        
        // Recursive calls in 4 directions
        dfs(grid, row - 1, col); // Up
        dfs(grid, row + 1, col); // Down
        dfs(grid, row, col - 1); // Left
        dfs(grid, row, col + 1); // Right
    }

};