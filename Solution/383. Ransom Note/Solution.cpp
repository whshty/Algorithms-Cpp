class Solution {
public:
    bool canConstruct(string t, string s) {
        unordered_map<char, int> map;

        // Magazine
        for (int i = 0; i < s.size(); i++) {
            map[s[i]]++;
        }

        for (int i = 0; i < t.size(); i++) {
            if(map[t[i]] > 0) map[t[i]]--;
            else return false;
        }
        return true;
    }
};