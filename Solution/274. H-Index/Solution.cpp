class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.rbegin(), citations.rend());

        int res = 0;

        while (res < citations.size() && citations[res] > res) {
            res++;
        }
        return res;
    }
};