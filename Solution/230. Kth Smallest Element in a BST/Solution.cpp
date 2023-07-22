/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> vector;
    int kthSmallest(TreeNode* root, int k) {
        helper(root);
        return vector[k-1];    
    }

    void helper(TreeNode* node) {
        if (node == NULL) return;
        helper(node->left);
        vector.push_back(node->val);
        helper(node->right);
    }
};