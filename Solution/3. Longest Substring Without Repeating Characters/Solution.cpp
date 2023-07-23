class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 0) return 0;
        unordered_map<char, int> map;
        int i = 0, j = 0, res = INT_MIN;
        while (j <s.length()) {
            map[s[j]]++;
            if (map.size() == j-i+1) {
                res = max(res,j-i+1);
            }
            else if (map.size() < j - i + 1) {
                while (map.size() < j- i + 1) {
                    map[s[i]]--;
                    if(map[s[i]] == 0) {
                        map.erase(s[i]);
                    }
                    i++;
                }     
            }
            j++;
        }
        return res; 
    }
};