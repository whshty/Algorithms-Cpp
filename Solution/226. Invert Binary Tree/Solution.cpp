class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) return root;
        TreeNode *left, *right, *temp;

        left = invertTree(root->left);
        right = invertTree(root->right);

        temp = left;
        left = right;
        right = temp;

        root->left = left;
        root->right = right;
        
        return root;
    }
};