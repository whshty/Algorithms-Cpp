class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cur = 0, times = 1, count = 1;
        for (int i = 1 ; i < nums.size(); i++) {
            if(nums[cur] != nums[i]) {
                times = 1;
                nums[count] = nums[i];
                cur = i;
                count++;
            } else {
                while (times < 2) {
                    times++;
                    nums[count] = nums[i];
                    count++;
                }
                times++;
            }
        }
        return count;
    }
};