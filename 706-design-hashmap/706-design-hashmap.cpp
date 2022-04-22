class MyHashMap {
public:
    map<int,int> M;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        M[key]=value;
    }
    
    int get(int key) {
        if(M.find(key)==M.end())
            return -1;
        return M[key];
    }
    
    void remove(int key) {
        if(M.find(key)!=M.end())
            M.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */