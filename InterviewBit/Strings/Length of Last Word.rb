class Solution
    # @param a : string
    # @return an integer
    def lengthOfLastWord(a)
        return a.split.length == 0 ? 0 : a.split.last.length
    end
end
