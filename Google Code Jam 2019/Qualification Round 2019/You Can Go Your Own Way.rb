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

# Use the following if the third case gives TLE
# T = gets.chomp
# (1..T.to_i).each do |k|
#     N = gets.chomp
#     P = gets.chomp
    
#     print "case ##{k}: "
#     P.each_char { |char|
#         print char == 'S' ? 'E' : 'S'
#     }
#     print "\n"
# end
