class MyHashSet {
public:
    vector<int> st;
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(find(st.begin(),st.end(),key)==st.end()){
            st.push_back(key);
        }
    }
    
    void remove(int key) {
        auto it = find(st.begin(),st.end(),key);
        if(it!=st.end()){
            st.erase(it);
        }
    }
    
    bool contains(int key) {
        if(find(st.begin(),st.end(),key)!=st.end()){
            return true;
        }else{
            return false;
        }
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */