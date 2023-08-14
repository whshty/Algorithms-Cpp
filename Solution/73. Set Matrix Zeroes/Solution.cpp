class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        queue<pair<int, int>> queue;

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    queue.push({i, j});
                }
            }
        }

        while (!queue.empty()) {
            int tempX = queue.front().first;
            int tempY = queue.front().second;
            queue.pop();

            for (int i = 0; i < matrix[0].size(); i++) {
                matrix[tempX][i] = 0;
            }
            for (int j = 0; j < matrix.size(); j++) {
                matrix[j][tempY] = 0;
            }
        }
    }
};