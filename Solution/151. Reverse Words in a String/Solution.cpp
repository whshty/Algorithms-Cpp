class Solution {
public:
    string reverseWords(string s) {
        string str = "";
        string temp = "";

        vector<string> res;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                temp = "";
            }

            while (s[i] != ' ' && i < s.length()) {
                temp += s[i];
                i++;
            }

            if (temp != "") {
                res.push_back(temp);
            }

            temp = "";
        }

        for (int i = res.size() -1; i >= 0; i--) {
            str += res[i];
            if (i != 0) str += ' ';
        }

        return str;
    }
};