def main()
    for tests in 0..(gets.chomp.to_i)-1
        ans, j, n = 0, 0, gets.chomp.to_i

        gRevolution = gets.chomp.split.map(&:to_i).sort
        opponents = gets.chomp.split.map(&:to_i).sort

        for i in 0..n-1
            next if gRevolution[i] <= opponents[j]
            ans += 1 and j += 1
        end 

        p ans
    end
end
main()
