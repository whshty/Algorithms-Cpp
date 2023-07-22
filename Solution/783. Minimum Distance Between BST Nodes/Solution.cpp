class Solution {
public:
    vector<int> nodes;
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        int res = INT_MAX;
        for (int i = 1; i < nodes.size(); i++) {
            res = min(res, nodes[i] - nodes[i-1]);
        }
        return res;
    }
    
    void inorder(TreeNode* node){
        if (node == NULL) return;
        inorder(node->left);
        nodes.push_back(node->val);
        inorder(node->right);
    }
};