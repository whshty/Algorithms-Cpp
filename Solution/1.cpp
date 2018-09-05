class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            if (map.count(target - nums[i])) {
                return {map.find(target-nums[i])->second,i};
            }
            map.insert({nums[i], i});
        }

    }
};
