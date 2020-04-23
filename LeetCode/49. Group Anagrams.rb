# @param {String[]} strs
# @return {String[][]}
def group_anagrams(strs)
    hash = {}
    ans = []
    strs.each { |val| 
        hash[val.chars.sort.join] ||= []
        hash[val.chars.sort.join] << val
    }
    hash.each { |key, value| ans << value }
    ans
end