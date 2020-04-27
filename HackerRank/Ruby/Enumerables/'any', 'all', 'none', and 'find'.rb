def func_any(hash)
    hash.any?{|k, i| k.is_a? Integer}
end

def func_all(hash)
    hash.all?{|k, v| v.is_a?(Integer) && v < 10}
end

def func_none(hash)
    hash.none?{|k, v| v.nil?}
end

def func_find(hash)
    hash.find do |k, v| 
        (k.is_a?(Integer) && v.is_a?(Integer) && v < 20) || 
        (k.is_a?(String) && v.is_a?(String) && v.start_with?('a'))
    end
end
