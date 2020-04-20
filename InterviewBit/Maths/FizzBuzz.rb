class Solution
    # @param a : integer
    # @return an array of strings
    def fizzBuzz(a)
        (1..a).map { |i| (fb = [["Fizz"][i % 3], ["Buzz"][i % 5]].compact.join).empty? ? i : fb }
    end
end
