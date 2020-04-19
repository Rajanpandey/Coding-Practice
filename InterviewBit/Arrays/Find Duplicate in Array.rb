class Solution
    # @param a : constant array of integers
    # @return an integer
    def repeatedNumber(a)
        arr = []
        a.each { |num|
            return num if arr[num]
            arr[num] = 1
        }
        -1
    end
end
