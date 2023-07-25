//  1
class Solution {
public:
    int jump(vector<int>& nums) {
        int index = 0, left = 0 , right = 0;

        int count = 0;

        while (index < nums.size()) {
            count++;
            for (int i = left; i < right; i++) {
                index = max(index, i + nums[i]);
            }
            left = right + 1;
            right = index;
        }        
        return count;
    }
};

// 2

class Solution {
public:
    int jump(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            nums[i] = max(nums[i] + i, nums[i-1]);
        }

        int i = 0, res = 0;

        while (i < nums.size() -1) {
            res++;
            i = nums[i];
        }
        return res;
    }
};