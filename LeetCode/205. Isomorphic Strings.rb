# @param {String} s
# @param {String} t
# @return {Boolean}
def is_isomorphic(s, t)
    sHash, tHash = {}, {}
    
    0.upto(s.length) do |idx|
        return false if sHash[s[idx]] != tHash[t[idx]]
        
        sHash[s[idx]] = idx
        tHash[t[idx]] = idx
    end
    
    true
end
