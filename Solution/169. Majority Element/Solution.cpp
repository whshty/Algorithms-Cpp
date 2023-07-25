class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;

        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }

        int size = nums.size() / 2;

        for (auto temp: map) {
            if (temp.second > size) return temp.first;
        }
        return 0;
    }
};