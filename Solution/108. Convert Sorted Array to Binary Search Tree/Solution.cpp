class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return buildTree(nums, 0, nums.size()-1);    
    }

    TreeNode* buildTree(vector<int>& nums, int left, int right) {
        if (left > right) return NULL;

        int mid = (left+right) / 2;
        TreeNode* node = new TreeNode(nums[mid]);

        node->left = buildTree(nums, left, mid - 1);
        node->right = buildTree(nums, mid + 1, right);

        return node;
    }
};