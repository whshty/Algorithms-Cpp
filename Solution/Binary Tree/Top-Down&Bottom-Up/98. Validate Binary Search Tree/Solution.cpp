class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        vector<int> nodes;

        inorder(root, nodes);

        for(int i = 0; i < nodes.size()-1; i++) {
            if(nodes[i] >= nodes[i+1]) return false;
        }       
        return true;
    }

    void inorder(TreeNode* root, vector <int> &nodes){
        if(!root) return;

        inorder(root->left, nodes);
        nodes.push_back(root -> val);    
        inorder(root -> right, nodes); 
    }

};