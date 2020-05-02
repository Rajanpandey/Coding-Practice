class LRUCache
    def initialize(capacity)
        @capacity = capacity
        @cache = {}
    end

    def get(key)
        return -1 unless @cache[key]
        value = @cache[key]
        @cache.delete(key)
        @cache[key] = value
    end

    def put(key, value)
        @cache.delete(key)
        @cache[key] = value
        @cache.shift if @cache.length > @capacity
    end
end

# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache.new(capacity)
# param_1 = obj.get(key)
# obj.put(key, value)
