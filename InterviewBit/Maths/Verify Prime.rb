class Solution
    # @param a : integer
    # @return an integer
    def isPrime(a)
        return 0 if a <= 1
        Math.sqrt(a).to_i.downto(2).each { |num| return 0 if num % i == 0 }
        1
    end
end
