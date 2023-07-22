class Solution {
public:
    void helper(TreeNode* node, int low, int high, vector<int>& vector) {
        if (node == NULL) return;

        if (node->val >= low && node->val <= high) {
            vector.push_back(node->val);
        }
        helper(node->left, low, high, vector);
        helper(node->right, low, high, vector);

    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> results;
        helper(root, low, high, results);
        return std::accumulate(results.begin(), results.end(), 0);
    }
};