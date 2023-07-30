class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        double sum = 0, avg = 0;

        queue<TreeNode*> queue;
        queue.push(root);

        while(!queue.empty()) {
            avg = 0; 
            sum = 0;
            int size = queue.size(), s = queue.size();
            while(size--) {
                TreeNode* node = queue.front();
                queue.pop();
                sum += node->val;

                if(node->left) {
                    queue.push(node->left);
                }
                if(node->right) {
                    queue.push(node->right);
                }
            }

            avg = sum / s;
            res.push_back(avg);
        }

        return res;
    }
};