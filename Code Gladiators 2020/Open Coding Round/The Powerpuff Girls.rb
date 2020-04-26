def main()
    n, ans = gets.chomp.to_i, 9223372036854775807
    
    requirements = gets.chomp.split.map(&:to_i)
    quantity = gets.chomp.split.map(&:to_i)
    
    (0..n-1).each { |i| ans = [ans, quantity[i]/requirements[i]].min }

    p ans
end
main()
