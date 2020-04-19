class Solution
    # @param a : constant array of integers
    # @return a string
    def largestNumber(a)
        res = a.map(&:to_s).sort! { |a, b| b + a <=> a + b }.join
        res[0] == '0' ? '0' : res
    end
end
