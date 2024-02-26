class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (root == NULL) return true;
        return helper(root) != -1;
    }

    int helper(TreeNode* node) {
        if (node == NULL) return 0;
        int leftHeight = helper(node->left);
        int rightHeight = helper(node->right);
        if (abs(leftHeight-rightHeight)  > 1 || leftHeight == -1 || rightHeight == -1 ) return -1;
        return max(leftHeight, rightHeight) + 1;
    }
};