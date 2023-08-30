class LRUCache {
public:
    class Node{
        public: 
            int key;
            int val;
            Node* prev;
            Node* next;

            Node(int key, int val){
                this->key = key;
                this->val = val;
            }
    };

    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);

    int limit;
    unordered_map<int, Node*> map;

    LRUCache(int capacity) {
        limit = capacity;
        head->next = tail;
        tail->prev = head;
    }

    void addNode(Node* input){
        Node* temp = head->next;

        input->next = temp;
        input->prev = head;

        head->next = input;
        temp->prev = input;
    }

     void deleteNode(Node* input){
        Node* temp_prev = input->prev;
        Node* temp_next = input->next;

        temp_prev->next = temp_next;
        temp_next->prev = temp_prev;
    }

    
    int get(int key) {
        if(map.find(key) != map.end()){
            Node* node = map[key];
            int res = node->val;

            map.erase(key);
            deleteNode(node);
            addNode(node);

            map[key] = head->next;
            return res;
        }
        return -1;
        
    }
    
    void put(int key, int value) {
        if(map.find(key) != map.end()){
            Node* node = map[key];
            map.erase(key);
            deleteNode(node);
        }

        if (map.size() == limit) {
            map.erase(tail->prev->key);
            deleteNode(tail->prev);
        }

        addNode(new Node(key, value));
        map[key] = head->next;  
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */