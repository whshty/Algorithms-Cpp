class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if (root == NULL) return res;
        helper(root, res, 0);
        return res;
    }
    
    void helper(TreeNode* node, vector<int>& res, int level) {
        if (node == NULL) return;
        if (res.size() == level) {
            res.push_back(node->val);
        }
        helper(node->right, res, level + 1);
        helper(node->left, res, level + 1);
    }
};