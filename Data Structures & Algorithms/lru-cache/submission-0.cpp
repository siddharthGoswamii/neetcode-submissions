class LRUCache {
private:
    struct Node{
        int key , value;
        Node* prev;
        Node* next;

        Node(int k , int v){
            key = k,
            value = v;
            prev = nullptr;
            next = nullptr;
        }
    };

    int cap;
    unordered_map<int, Node*> cache;
    Node* dummyTail;
    Node* dummyHead;

    void addNode(Node* node){
        Node* last = dummyTail->prev;
        last->next = node;
        node->prev = last;

        node->next = dummyTail;
        dummyTail->prev = node;
    }

    void removeNode(Node* node){
        Node* before = node->prev;
        Node* after = node->next;

        before->next = after;
        after->prev = before;
    }

    void moveToMRU(Node* node){
        removeNode(node);
        addNode(node);
    }


public:
    LRUCache(int capacity) {
        cap = capacity;
        dummyHead = new Node(-1,-1);
        dummyTail = new Node(-1,-1);

        dummyHead->next = dummyTail;
        dummyTail->prev = dummyHead;
    }
    
    int get(int key) {
        if(cache.find(key) == cache.end()){
            return -1;
        }

        Node* node = cache[key];
        moveToMRU(node);
        return node->value;
    }
    
    void put(int key, int value) {
        if(cache.find(key) != cache.end()){
            Node* node = cache[key];
            node->value = value;
            moveToMRU(node);
            return;
        }

        if(cache.size()==cap){
            Node* lru = dummyHead->next;
            
            cache.erase(lru->key);
            removeNode(lru);
            delete lru;
        }

        //Insert the new key at the MRU end

        Node* node = new Node(key, value);
        cache[key] = node;
        addNode(node);
    }
};
