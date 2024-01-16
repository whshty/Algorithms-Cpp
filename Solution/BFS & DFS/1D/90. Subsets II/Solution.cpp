class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> list;
        helper(res, list, nums, 0);
        return res; 
    }

    void helper(vector<vector<int>>& res, vector<int>& list, vector<int>& nums, int index) {
        res.push_back(list);
        for(int i = index; i < nums.size(); i++) {
            if ( i > index && nums[i] == nums[i-1]) continue;
            list.push_back(nums[i]);
            helper(res, list, nums, i + 1);
            list.pop_back();
        }
    }
};