class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0, j= nums.size();
        int mid;
        if(target > nums[j-1]){
            return j;
        }
        while(i <= j){
            mid = (i + j) / 2;
            if(nums[mid] == target) return mid;
          
            if(target < nums[mid]){
                j = mid-1;    
            } else {
                i = mid+1;        
            }
          
        }
        return i;  
    }
};