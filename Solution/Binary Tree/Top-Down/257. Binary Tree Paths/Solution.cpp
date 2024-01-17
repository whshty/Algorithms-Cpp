class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if (root == NULL) return res;
        helper(root, res, "");
        return res;
    }

    void helper(TreeNode* node, vector<string>& res, string str) {
        if (node) {
            str.append(to_string(node->val));
            if (node->left == NULL && node->right == NULL) {
                res.push_back(str);
            } else {
                str.append("->");
                helper(node->left, res, str);
                helper(node->right, res, str);
            }
        }
    }
};