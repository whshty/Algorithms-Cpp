class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return helper(root, 0, targetSum);
    }

    bool helper(TreeNode* node, int sum, int target) {
        if (node == NULL) return false;
        if (node->left == NULL && node->right == NULL) {
            sum = sum + node->val;
            if(sum == target) return true;
        }
        return helper(node->left, sum + node->val, target) || helper(node->right, sum + node->val, target);
    }
};