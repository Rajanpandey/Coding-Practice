def firstNotRepeatingCharacter(s)
    hash = Hash.new(0)

    s.chars.each do |ch|
        hash[ch] += 1;
    end

    hash.each do |ch, count|
        return ch if count == 1
    end

    '_'
end

# Ruby shorter sol:
# def firstNotRepeatingCharacter(s)
#     s.chars.each { |ch| return ch if s.count(ch) == 1 }
#     '_'
# end
