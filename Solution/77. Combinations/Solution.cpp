class Solution {
public:
    void helper(vector<int>& nums, vector<vector<int>>& res, int n, int k, int index, int cur){
        if (index == k){ 
            res.push_back(nums);
            return;
        }
        for(int i = cur; i <= n - k + index + 1; i++){ 
            nums[index] = i;
            helper(nums, res, n, k, index + 1, i + 1);
        }
    }


    vector<vector<int>> combine(int n, int k) {
        vector<int> nums = vector<int>(k);
        vector<vector<int>> res;

        helper(nums, res, n, k, 0, 1);
        return res;
    }
};