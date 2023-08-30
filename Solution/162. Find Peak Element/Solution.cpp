class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        // 1,2,6,5,7,4
        // i = 2 

        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] > nums[i+1]){
                return i;
            }
        }
        return nums.size() - 1;
    }
};