class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        
        int i = 0, j = 0;
        int n = strs.size();

        string res = "";

        while (i < strs[0].size() && strs[n-1].size()) {
            if (strs[0][i] != strs[n-1][j]) break;
            res+= strs[0][i];
            i++;
            j++;
        }
        return res;
    }
};