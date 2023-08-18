class Solution {
public:
    vector<string> generateParenthesis(int n) {
        int left = n, right = n;
        vector<string> res;
        string str = "";
        helper(res, str, left, right);
        return res;
    }
    

    void helper(vector<string>& res, string str, int left, int right) {
        if (left == 0 && right == 0) {
            res.push_back(str);
            return;
        }

        else if (left == right) {
            string temp = str;
            temp.push_back('(');
            helper(res, temp, left -1 , right);
        } else if (left == 0) {
            string temp = str;
            temp.push_back(')');
            helper(res, temp, left, right - 1);
        } else {
            string temp1 = str, temp2 = str;
            temp1.push_back('(');
            temp2.push_back(')');

            helper(res, temp1, left -1, right);
            helper(res, temp2, left, right -1);
        }
    }
};