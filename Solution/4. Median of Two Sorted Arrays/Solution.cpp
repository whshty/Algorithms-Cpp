class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size();
        int len2 = nums2.size();

        int i = 0, j = 0;
        int index = -1;
        vector<int> array(len1 + len2, 0);
        while (i < len1 && j < len2) {
            if(nums1[i] < nums2[j]) {
                array[++index] = nums1[i++];
            } else {
                array[++index] = nums2[j++]; 
            }
        }

        while (i < len1) {
            array[++index] = nums1[i++];
        }
        while (j < len2) {
            array[++index] = nums2[j++];
        }

        int total = len1 + len2;
        return total % 2 ? array[total/2] : (array[total/2] + array[total/2-1]) / 2.0;
    }
};