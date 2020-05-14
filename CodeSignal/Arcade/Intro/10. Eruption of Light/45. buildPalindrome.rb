def buildPalindrome(st)
    return st if st == st.reverse

    ans = ""
    i = st.length - 1

    while st.include?(ans)
        ans += st[i]
        i -= 1
    end


    st + st[0..(st.length - ans.length)].reverse
end
