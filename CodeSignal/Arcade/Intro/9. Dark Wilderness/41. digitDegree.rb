def digitDegree(n)
    ans = 0

    while n.digits.size > 1
        n = n.digits.sum
        ans += 1
    end

    ans
end
