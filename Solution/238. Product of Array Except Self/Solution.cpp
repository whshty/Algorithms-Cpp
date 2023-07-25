class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size());
        vector<int> right(nums.size());
        vector<int> res(nums.size());

        left[0] = 1;
        right[nums.size()-1] = 1;

        for (int i = 1; i < nums.size(); i++) {
            int index = nums.size() - 1 - i;
            left[i] = left[i-1] * nums[i-1];
            right[index] = right[index+1] * nums[index+1];
        }

        for (int i = 0; i <nums.size(); i++) {
            res[i] = left[i] * right[i];
        }       
        return res;
    }
};