class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        set<vector<int>> set;
        vector<int> list;
        helper(set, list, candidates, 0, target);
        vector<vector<int>> res;
        res.assign(set.begin(), set.end());
        return res;
    }

    void helper(set<vector<int>>& res, vector<int>& list, vector<int>& nums, int index, int target) {
        // Base case
        if(target == 0) {
            res.insert(list);
            return;
        }
        if (target < 0 || index == nums.size()) return;
        //if (index > 0 && nums[index] == nums[index-1]) return;
        // Skip
        helper(res, list, nums, index + 1, target);
        // Use 
        list.push_back(nums[index]);
        helper(res, list, nums, index + 1 , target - nums[index]);
        list.pop_back();
    }
};