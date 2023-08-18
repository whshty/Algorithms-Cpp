class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,list<int>> map;
        for(auto task:prerequisites){
            int i = task[0];
            int j = task[1];
            map[i].push_back(j);
        }

        vector<int> res = bfs(map, numCourses);
        reverse(res.begin(),res.end());
        return res;
    }

    vector<int> bfs(unordered_map<int,list<int>>&  map, int n){
        vector<int> res;
        unordered_map<int,int> indegree;
        queue<int> queue;
        for(auto i: map){
            for(auto temp : i.second) indegree[temp]++;
        }

        for(int i = 0; i < n ; i++){
            if(indegree[i]==0) queue.push(i);
        }

        while(!queue.empty()){
            int temp = queue.front();
            queue.pop();
            res.push_back(temp);
            for(auto i : map[temp]){
                indegree[i]--;    
                if(indegree[i] == 0) queue.push(i);
            }
        }
        if(res.size() == n) return res;
        else return {};
    }
};