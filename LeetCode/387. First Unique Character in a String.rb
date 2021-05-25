# @param {String} s
# @return {Integer}
def first_uniq_char(s)
    hash = {}

    s.split('').each do |char|
        hash[char] ||= 0
        hash[char] += 1
    end

    hash.each do |char, val|
        return s.index(char) if val == 1
    end

    -1
end


# Method 2:
# def first_uniq_char(s)
#     arr = Array.new(26, 0)

#     s.split('').each do |char|
#         arr[char.ord - 97] ||= 0
#         arr[char.ord - 97] += 1
#     end

#     s.split('').each_with_index do |char, idx|
#         return idx if arr[char.ord - 97] == 1
#     end

#     -1
# end
