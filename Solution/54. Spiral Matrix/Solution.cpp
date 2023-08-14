class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if (matrix.empty() || matrix[0].empty()) {
            return res;
        }

        int row = matrix.size(), col = matrix[0].size();
        int left = 0, right = col - 1, up = 0, down = row - 1;

        while (left <= right && up <= down) {
            for (int i = left; i <= right; i++) {
                res.push_back(matrix[up][i]);
            }
            up++;

            for (int i = up; i <= down; i++) {
                res.push_back(matrix[i][right]);
            }
            right--;

            if (up <= down) {
                for (int i = right; i >= left; i--) {
                    res.push_back(matrix[down][i]); 
                }
                down--;
            }

            if(left <= right) {
                for (int i = down; i >= up; i--) {
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return res;
    }
};