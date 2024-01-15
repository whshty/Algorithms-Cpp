class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> list;
        helper(res, list, candidates, 0, target);
        return res;
    }

    void helper(vector<vector<int>>& res, vector<int>& list, vector<int>& nums, int index, int target) {
        // Base case
        if(target == 0) {
            res.push_back(list);
            return;
        }
        if (target < 0 || index == nums.size()) return;
        // Skip
        helper(res, list , nums, index + 1, target);

        // Use 
        list.push_back(nums[index]);
        helper(res, list , nums, index, target - nums[index]);
        list.pop_back();
    }
};