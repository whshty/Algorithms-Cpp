class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int i = 0, j = matrix[0].size() -1;

        while (i < matrix.size() && j >= 0) {
            int temp = matrix[i][j];
            if (temp == target) return true;
            
            // target on left side
            if (temp > target) {
                j--;
            } else {
                i++; // target on the down side
            }
        }
        return false;
        
    }
};