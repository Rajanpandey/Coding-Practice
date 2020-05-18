def isCryptSolution(crypt, solution)
    nums = crypt.map { |w| w.gsub(/./, solution.to_h) }
    return false if nums.any? { |num| num.match(/^0./) }
    a, b, c = nums.map(&:to_i)
    a + b == c
end
