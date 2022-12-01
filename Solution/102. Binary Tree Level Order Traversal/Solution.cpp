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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        vector<int> temp;
        vector<vector<int>> result;

        queue<TreeNode*> queue;
        queue.push(root);

        int count = 1;
        
        while(!queue.empty()) {
            if(queue.front()->left) {
                queue.push(queue.front()->left);
            }
            if(queue.front()->right) {
                queue.push(queue.front()->right);
            }
            temp.push_back(queue.front()->val);
            queue.pop();
            if(--count == 0){
                result.emplace_back(temp);
                temp.clear();
                count = queue.size();
            }
        }   
        return result;     
    }
};