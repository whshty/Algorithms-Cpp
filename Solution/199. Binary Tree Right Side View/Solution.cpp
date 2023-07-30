class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if (root == NULL) return res;

        queue<TreeNode*> queue;
        queue.push(root);

        while(queue.size() != 0) {
            int size = queue.size();
            vector<int> temp;
            while(size--){
                TreeNode* node = queue.front();
                queue.pop();
                temp.push_back(node->val);
                if(node->left != NULL) queue.push(node->left);
                if(node->right != NULL) queue.push(node->right);
            }
            res.push_back(temp.back());
        }
        return res;
    }
};