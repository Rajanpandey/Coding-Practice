class Solution
    # @param a : array of integers
    # @return an integer
    def firstMissingPositive(a)
        missing = 1
        a.sort!
        a.each { |num|
            next if num < 1
            missing += 1 and next if num == missing
            break
        }
        missing
    end
end
