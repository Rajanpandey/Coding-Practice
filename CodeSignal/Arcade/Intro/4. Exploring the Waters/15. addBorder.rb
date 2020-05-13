def addBorder(picture)
    ans = []
    n = picture[0].size

    ans << "*" * (n + 2)
    picture.each do |str|
        ans << "*#{str}*"
    end
    ans << "*" * (n + 2)
end
