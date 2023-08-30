// BF
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if (amount < 1) return 0;
        return helper(coins, amount);
    }

    int helper(vector<int> &coins, int value) {
        if (value < 0) return -1;
        if (value == 0) return 0;

        int res = 0;
        int min = INT_MAX;

        for (auto i: coins) {
            res = helper(coins, value - i);
            if (res >= 0 && res < min) min = 1 + res;
        }

        if (min == INT_MAX) return -1;
        else return min;
    }
};



// MEMO DFS

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if (amount < 1) return 0;
        unordered_map<int, int> map;
        return helper(coins, amount, map);
    }

    int helper(vector<int> &coins, int value, unordered_map<int, int> &map) {
        if (value < 0) return -1;
        if (value == 0) return 0;
        if (map.find(value) != map.end()) return map[value];

        int res = 0;
        int min = INT_MAX;

        for (auto i: coins) {
            res = helper(coins, value - i, map);
            if (res >= 0 && res < min) min = 1 + res;
        }

        if (min == INT_MAX) return -1;
        map[value] = min;
        return min;
    }
};