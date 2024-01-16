class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> list;
        helper(res, list, nums, 0);
        return res;
    }

    void helper(vector<vector<int>>& res, vector<int>& list, vector<int>& nums, int index) {
        res.push_back(list);
        for(int i = index; i < nums.size(); i++) {
            list.push_back(nums[i]);
            helper(res, list, nums, i + 1);
            list.pop_back();
        }
    }
};