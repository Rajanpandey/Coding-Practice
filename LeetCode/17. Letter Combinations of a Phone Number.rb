# @param {String} digits
# @return {String[]}
def letter_combinations(digits)
    return [] if digits.size == 0
    
    ans = [""]
    mapping = ["abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"]
    
    digits.each_char do |digit|
        temp = []
        ans.each do |prevChar|
            mapping[digit.ord - '2'.ord].each_char do |currChar|
                temp << prevChar + currChar
            end
        end
        ans = temp
    end
    
    return ans
end
