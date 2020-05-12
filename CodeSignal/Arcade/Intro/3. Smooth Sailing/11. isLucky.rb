def isLucky(n)
    n = n.to_s.chars.map(&:to_i)
    midPoint = n.length / 2
    n[0..midPoint-1].reduce(:+) == n[midPoint..-1].reduce(:+)
end
