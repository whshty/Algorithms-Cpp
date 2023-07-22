
//  There are four possible scenarios for any given subtree:

// Root and maximum sum path of left subtree
// Root and maximum sum path of right subtree
// Root, left maximum path and right maximum path
// Only root node
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
        int temp = max(node->val, max(left + node->val, right + node->val));

        res = max(temp, max(left + right + node->val, res));

        return res;
    }
};