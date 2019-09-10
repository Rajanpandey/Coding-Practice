T = gets.chomp
(1..T.to_i).each do |k|
    N = gets.chomp
    ans = ""
    
    N.each_char.with_index { |char, index|
        if N[index] == '4'
            N[index] = '3'
            ans += '1'
        else
            ans += '0'
        end
    }
    puts "case ##{k}: #{N} #{ans.sub(/^0/, '')}"
end
