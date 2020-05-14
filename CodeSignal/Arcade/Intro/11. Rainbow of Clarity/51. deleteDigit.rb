def deleteDigit(n)
    n = n.to_s
    lastToDelete = true
    for i in 0..(n.size - 2)
        if n[i] < n[i + 1]
            n = n.tap {|s| s.slice!(i) }
            lastToDelete = false
            break
        end
    end
    n = n.tap {|s| s.slice!(n.size - 1) } if lastToDelete
    n.to_i
end

# Smarter Ruby Sol:
# def deleteDigit(n)
#     digits = n.to_s.chars
#     digits.size.times.map{|m|
#         d = digits.dup
#         d.delete_at(m)
#         d
#     }.map(&:join).map(&:to_i).max
# end
