class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = INT_MAX, res = 0, curMax = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < low) low = prices[i];
            curMax = prices[i] - low;
            if (res < curMax) res = curMax;
        }
        return res;   
    }
};