def isBeautifulString(inputString)
    curr, prev = inputString.count('a')
    for i in 1..25
        prev = curr
        curr = inputString.count((i + 97).chr)
        return false if curr > prev
        break if !curr
    end

    true
end

# Ruby One Liner Sol:
# def isBeautifulString(inputString)
#     ("a".."z").map { |alphabet| inputString.count(alphabet) }.each_cons(2).all? { |a, b| a >= b }
# end
