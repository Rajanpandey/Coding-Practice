class Solution
    # @param a : array of integers
    # @return an integer
    def solve(a)
        a.sort!
        a.each_with_index { |num, i| return 1 if num == a.length-i-1 && a[i] != a[i+1] }
        -1
    end
end
