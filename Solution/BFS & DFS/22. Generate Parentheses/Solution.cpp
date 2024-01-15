class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string str = "";
        helper(res, str, n, n);
        return res;
    }

    void helper(vector<string>& res, string str, int left, int right) {
        // Base case
        if (left == 0 && right == 0) {
            res.push_back(str);
            return;
        }
        else if (left == right) {
            str.push_back('(');
            helper(res, str, left - 1, right);
        }
        else if(left == 0) {
            str.push_back(')');
            helper(res, str, 0, right - 1);
        }
        else {
            string temp1 = str;
            string temp2 = str;
            temp1.push_back('(');
            temp2.push_back(')');
            helper(res, temp1, left - 1, right);
            helper(res, temp2, left, right - 1);
        }
    }
};