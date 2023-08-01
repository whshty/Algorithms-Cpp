class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        int res = INT_MAX;
        int pre = -1;
        helper(root, pre, res);
        return res;
        
    }

    void helper(TreeNode *node, int &pre, int &res) {
        if (node == NULL) return;
        helper(node->left, pre, res);
        if (pre != -1) res = min(res, node->val - pre);
        pre = node->val;
        helper(node->right, pre, res);
    }
};