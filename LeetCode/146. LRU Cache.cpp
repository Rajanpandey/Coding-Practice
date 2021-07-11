class LRUCache {
    int _capacity;
    list<int> lru;                              // First is MRU, Last is LRU
    unordered_map<int, list<int>::iterator> mp; // key -> iterator
    unordered_map<int, int> _cache;         
    
public:
    
    LRUCache(int capacity) {
        _capacity = capacity;
    }
    
    int get(int key) {
        if(_cache.count(key) == 0) return -1;
        updateLRU(key);
        return _cache[key];
    }
    
    void put(int key, int value) {
        if(_cache.size() == _capacity && _cache.count(key) == 0) {
            mp.erase(lru.back());
            _cache.erase(lru.back());
            lru.pop_back();
        }
        updateLRU(key);
        _cache[key] = value;
    }

    void updateLRU(int key) {
        if(_cache.count(key)) {
            lru.erase(mp[key]);
        }
        lru.push_front(key);
        mp[key] = lru.begin();
    }
};
