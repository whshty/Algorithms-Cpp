class Solution {
public:
    int sumNumbers(TreeNode* root) {
        int res = 0;
        helper(root, res, 0);
        return res;
    }

    void helper (TreeNode* root, int& sum, int num){
        if(!root) return;
            num = num * 10 + root->val;
            if(root->left == NULL && root->right == NULL) {        
                sum += num;
                return;
        }  
        
        helper(root->left, sum, num);
        helper(root->right, sum, num);    
    }
};