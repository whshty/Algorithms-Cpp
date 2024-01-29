// 1. Root and maximum sum path of left subtree
// 2. Root and maximum sum path of right subtree
// 3. Root, left maximum path and right maximum path
// 4. Only root node
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
        helper(root, res);
        return res;    
    }

    int helper(TreeNode* node, int& res) {
        if (node == NULL) return 0;
        if (node->left == NULL && node->right == NULL) {
            res = max(node->val, res);
            return node->val;
        }

        int left = helper(node->left, res), right = helper(node->right, res);
        int maxVal = max(node->val, max(left + node->val, right + node->val));

        res = max(maxVal, max(left + right + node->val, res));

        return maxVal;
    }
};