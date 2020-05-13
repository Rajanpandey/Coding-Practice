def countTinyPairs(a, b, k)
    ans = 0

    for i in 0..(a.size - 1)
        ans += 1 if (a[i].to_s + b[a.size - i - 1].to_s).to_i < k
    end

    ans
end
