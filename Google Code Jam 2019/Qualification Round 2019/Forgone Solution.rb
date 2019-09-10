T = gets.chomp
(1..T.to_i).each do |k|
    N = gets.chomp
    ans = ""
    N.each_char.with_index { |char, index|
        N[index] = '3' and ans += '1' if char == '4'
        ans += '0' if char != '4'
    }
    puts "case ##{k}: #{N} #{ans.to_i}"
end
