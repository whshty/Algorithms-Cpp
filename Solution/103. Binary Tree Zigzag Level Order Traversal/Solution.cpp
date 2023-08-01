class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return res;
        
        queue<TreeNode*> queue;
        queue.push(root);
        
        while(!queue.empty()) {
            vector<int> temp;
            for (int i = 0, size = queue.size(); i < size; i++) {
                TreeNode* node = queue.front();
                queue.pop();
                temp.push_back(node->val);
                if(node->left) queue.push(node->left);
                if(node->right) queue.push(node->right);
            }
            res.push_back(temp);
        }   
        //return res;     
        for(int i = 1; i< res.size(); i=i+2){
            reverse(res[i].begin(), res[i].end());
        }
        return res;
    }
};