class Solution { 
public:
    bool isHappy(int n) {
        if (n == 1) return true;
        else if (n == 4) return false; // If the input is 2 
        else return isHappy(next(n));
    }

      int next(int n){
        int res = 0;
        while(n != 0) {
            int num = n%10;
            res += num*num;
            n= n/10;
        }
        return res;
    }
};