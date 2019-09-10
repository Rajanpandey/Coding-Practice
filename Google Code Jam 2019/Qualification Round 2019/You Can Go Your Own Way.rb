T = gets.chomp
(1..T.to_i).each do |k|
    N = gets.chomp
    P = gets.chomp
    
    ans = ""
    P.each_char { |char|
        ans += char == 'S' ? 'E' : 'S'
    }
    puts "case ##{k}: #{ans}"
end
