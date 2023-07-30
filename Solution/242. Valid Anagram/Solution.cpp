class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> map;

        for (auto i : s) {
            map[i]++;
        }

        for (auto i : t) {
            map[i]--;
        }

        for (auto i :map) {
            if (i.second != 0) return false;
        }
        return true;
    }
};