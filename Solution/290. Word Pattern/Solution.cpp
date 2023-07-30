class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> map1;
        unordered_map<string, char> map2;

        int j = 0;
        for (int i = 0; i < pattern.size(); i++) {
            if (j > s.size()) return false;  
            string word = "";
            while (j < s.size() && s[j] != ' ') {
                word += s[j];
                j++;
            }
            j++; 
            if (map1.find(pattern[i]) != map1.end()) {
                if (map1[pattern[i]] != word) return false;
            }

            if (map2.find(word) != map2.end()) {
                if (map2[word] != pattern[i]) return false;
            }
            map1[pattern[i]] = word;
            map2[word] = pattern[i];
        }
        if (j < s.size()) return 0;
        return true;
    }
};