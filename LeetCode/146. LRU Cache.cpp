class LRUCache {
    int _capacity;
    list<int> lru;                               // First is MRU, Last is LRU
    unordered_map<int, list<int>::iterator> map; // key -> iterator
    unordered_map<int, int> cache;
    
public:
    LRUCache(int capacity) {
        _capacity = capacity;
    }
    
    int get(int key) {
        if(cache.count(key) == 0) return -1;
        updateLRU(key);
        return cache[key];
    }
    
    void put(int key, int value) {
        if(cache.size() == _capacity && cache.count(key) == 0) {
            map.erase(lru.back());
            cache.erase(lru.back());
            lru.pop_back();
        }
        updateLRU(key);
        cache[key] = value;
    }

    void updateLRU(int key) {
        if(cache.count(key)) {
            lru.erase(map[key]);
        }
        lru.push_front(key);
        map[key] = lru.begin();
    }
};
