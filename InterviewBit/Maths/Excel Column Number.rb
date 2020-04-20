class Solution
    # @param a : string
    # @return an integer
    def titleToNumber(a)
        ans = 0
        a.each_char { |ch| ans = ans*26 + ch.ord - 'A'.ord + 1 }
        ans
    end
end
