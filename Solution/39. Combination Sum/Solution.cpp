class Solution {
public:
    void helper(vector<vector<int>>& res, vector<int>& nums,  vector<int>& list, int target, int index) {
        if (target == 0) {
            res.push_back(list);
            return;
        }
        if (target < 0 || nums.size() == index) return;

        helper(res, nums, list, target, index + 1);

        list.push_back(nums[index]);
        helper(res, nums, list, target - nums[index], index);
        list.pop_back();
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> list;

        helper(res, candidates, list, target, 0);
        return res;  
    }
};