# @param {String} s
# @param {String} t
# @return {Boolean}
def is_anagram(s, t)
    arr1 = Array.new(26, 0)
    arr2 = Array.new(26, 0)

    s.split('').each do |char|
        arr1[char.ord - 97] ||= 0
        arr1[char.ord - 97] += 1
    end

    t.split('').each do |char|
        arr2[char.ord - 97] ||= 0
        arr2[char.ord - 97] += 1
    end

    arr1 == arr2
end
