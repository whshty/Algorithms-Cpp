class RandomizedSet {

private:
    std::unordered_map<int, int> map;
    std::vector<int> list;

public:
    RandomizedSet() {        
    }
    
    bool insert(int val) {
        if(map.count(val) != 0) return false;
        map[val] = list.size();
        list.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if (map.count(val) != 0) {
            int index = map[val];
            int lastVal = list.back();
            list[index] = lastVal;
            list.pop_back();
            map[lastVal] = index;
            map.erase(val);

            return true; 
        }
        return false;
    }
    
    int getRandom() {
        int random = std::rand() % list.size();
        return list[random];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */