class BSTIterator {
public:

    stack<TreeNode*> stack;
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
    int next() {
        TreeNode* node = stack.top();
        stack.pop();
        inorder(node->right); 
        return node->val;       
    }
    
    bool hasNext() {
        return !stack.empty();
    }

    void inorder(TreeNode* node) {
        while (node != NULL) {
            stack.push(node);
            node = node->left;
        }
    }
};