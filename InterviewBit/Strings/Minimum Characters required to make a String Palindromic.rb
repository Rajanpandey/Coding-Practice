class Solution
  # @param a : string
  # @return an integer
  def solve(a)
    return 0 if a.size < 2
    r = a.reverse
    (0..r.size-1).each { |i|
        if a.start_with?(r[i..-1])
            return 0 if i == 0
            return i
        end
    }
  end
end