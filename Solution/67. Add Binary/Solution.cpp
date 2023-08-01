class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int cur = 0;
        
        int i = a.length() - 1;
        int j = b.length() - 1;

        while (i >= 0 || j >= 0 || cur) {
            if (i >= 0)
                cur += a[i--] - '0';
            if (j >= 0)
                cur += b[j--] - '0';
            res += cur % 2 + '0';
            cur /= 2;
        }

        reverse(begin(res), end(res));
        return res;
    }
};