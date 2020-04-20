class Solution
    # @param a : integer
    # @return an integer
    def isPalindrome(a)
        a.to_s == a.to_s.reverse ? 1 : 0
    end
end
