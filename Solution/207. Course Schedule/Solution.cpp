class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<int> adj[n];
        vector<int> indegree(n, 0);
        vector<int> res;

        for (auto x: prerequisites) {
            adj[x[0]].push_back(x[1]);
            indegree[x[1]]++;
        }

        queue<int> queue;

        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0) queue.push(i);
        }

        while (!queue.empty()) {
            auto temp = queue.front();
            res.push_back(temp);
            queue.pop();

            for (auto x : adj[temp]) {
                indegree[x]--;
                if (indegree[x] == 0) queue.push(x);
            }
        }
        return res.size() == n;
    }
};