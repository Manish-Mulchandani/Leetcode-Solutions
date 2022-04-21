class MyHashSet {
public:
    set<int> A;
    MyHashSet() {
        
    }
    
    void add(int key) {
        A.insert(key);
    }
    
    void remove(int key) {
        auto it=A.find(key);
        if(it!=A.end())
            A.erase(it);
    }
    
    bool contains(int key) {
        if(A.find(key)!=A.end())
            return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */