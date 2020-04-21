class Solution
    # @param a : string
    # @return a string
    def longestPalindrome(a)
        return "" if a.eql? ""
        ans = a[0]
        a.each_char.with_index do |char, index|
            p1 = expandAroundCenter(a, index, index)
            p2 = expandAroundCenter(a, index, index+1)
            ans = p1 if p1.length > ans.length
            ans = p2 if p2.length > ans.length
        end
        ans
    end
    
    def expandAroundCenter(a, left, right)
        while left >= 0 and right < a.length and a[left] == a[right]
            left -= 1
            right += 1
        end
        a[left+1, right-left-1]
    end
end
