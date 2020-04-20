class Solution
    # @param a : integer
    # @param b : integer
    # @return an integer
    def uniquePaths(a, b)
        a == 1 || b == 1 ? 1 : self.uniquePaths(a-1, b) + self.uniquePaths(a, b-1)
    end
end
