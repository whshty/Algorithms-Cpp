class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;
        for(auto i: nums) {
            set.insert(i);
        }

        int res = 0;
        for (auto i: nums) {
            if (set.find(i-1) == set.end()) {
                int currentVal = i;
                int tempRes = 1;
                while (set.find(currentVal+1) != set.end()) {
                    currentVal++;
                    tempRes++;
                }
                res = max(res, tempRes);
            }
            
        }
        return res;
    
    }
};