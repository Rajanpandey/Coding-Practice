class Solution
    # @param a : string
    # @return an integer
    def isPalindrome(a)
        a.downcase.delete('^a-z0-9') == a.downcase.delete('^a-z0-9').reverse ? 1 :0
    end
end
