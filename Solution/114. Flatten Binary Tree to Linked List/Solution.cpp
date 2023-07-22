class Solution {
public:
    void flatten(TreeNode* root) {
        if (root == NULL) return;
        TreeNode* &node = root;
        while (node) {
            if (node->left) {
                TreeNode* left = node->left;
                while (left->right) {
                    left = left->right;
                }
                left->right = node->right;
                node->right = node->left;

                node->left = NULL;
            }
            node = node->right;
        }
        
    }
};