class Solution
    # @param a : array of integers
    # @return an array of integers
    def plusOne(a)
        (a.join.to_i + 1).to_s.split('')
    end
end
