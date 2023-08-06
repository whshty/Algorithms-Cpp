class Solution {
public:
    const string keyboard[10] = {"", "", "abc" , "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

     void solve(string str, vector<string>& res, string digits, int i){
        if(i == digits.length()){
            res.push_back(str);
            return;
        }

        int index = digits[i] - '0';
        string val = keyboard[index];
        for(int j = 0; j < val.length(); j++){
            str.push_back(val[j]);
            solve(str, res, digits, i+1);
            str.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits){
        vector<string> res;
        if(digits.length() == 0)    return res;
        string str = "";

        solve(str, res, digits, 0);
        return res;
    }
};