/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:

    unordered_map<Node*, Node*> map;

    Node* cloneGraph(Node* node) {
        if(node == NULL) return NULL;

        Node* temp = new Node(node -> val, {});
        map[node] = temp;
        queue<Node*> queue;
        queue.push(node);

        while(queue.empty() == false) {
            Node* cur = queue.front();
            queue.pop();

            for (auto adj: cur->neighbors) {
                if (map.find(adj) == map.end()) {
                    map[adj] = new Node(adj -> val, {});
                    queue.push(adj);    
                }
                map[cur] -> neighbors.push_back(map[adj]);
            }

        }
        return map[node];
    }
};