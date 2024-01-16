class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> nums = vector<int>(k);
        helper(
            res, 
            nums, 
            n, // Value Limit
            k,  // Size Limt
            0, // current index
            1); // Current value
        return res;
    }

    void helper(vector<vector<int>>& res, vector<int>& nums, int n, int k, int index, int cur){
        if (index == k){ 
            res.push_back(nums);
            return;
        }
        for(int value = cur; value <= n; value++){ 
            nums[index] = value;
            helper(res, nums, n, k, index + 1, value + 1);
        }
    }
};