class Solution
    # @param a : string
    # @return an array of integers
    def flip(a)
        max, max_here, left = 0, 0, 0
        res = []
        
        a.each_char.with_index { |num, index|
            max_here += (num.to_i) == 1 ? -1 : 1
            max_here = 0 and left = index+1 if max_here < 0
            max = max_here and res = [left+1, index+1] if max_here > max
        }
        res
    end
end
