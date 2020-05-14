def mergeStrings(s1, s2)
    s = ""
    while s1.length * s2.length != 0
        if s1.count(s1[0]) > s2.count(s2[0]) || (s1.count(s1[0]) == s2.count(s2[0]) && s1[0] > s2[0])
            s += s2.slice!(0)
        else
            s += s1.slice!(0)
        end
    end

    s + s1 + s2
end

# One liner Ruby Sol:
# def mergeStrings(s1, s2)
#     s = ""
#     s += s1.count(s1[0]) > s2.count(s2[0]) ||  (s1.count(s1[0]) == s2.count(s2[0]) && s1[0] > s2[0]) ? s2.slice!(0) : s1.slice!(0) while s1.length * s2.length != 0
#     s + s1 + s2
# end
