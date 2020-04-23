def longest_palindrome(s)
    return "" if s.eql? ""
    ans = s[0]
    s.each_char.with_index do |char, index|
        p1 = expandAroundCenter(s, index, index)
        p2 = expandAroundCenter(s, index, index+1)
        ans = p1 if p1.length > ans.length
        ans = p2 if p2.length > ans.length
    end
    ans
end

def expandAroundCenter(s, left, right)
    while left >= 0 and right < s.length and s[left] == s[right]
        left -= 1
        right += 1
    end
    s[left+1, right-left-1]
end