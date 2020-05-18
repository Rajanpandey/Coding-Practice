def sudoku2(grid)
    grid.each do |row|
        return false if (row - ['.']) != (row - ['.']).uniq
    end

    grid.transpose.each do |row|
        return false if (row - ['.']) != (row - ['.']).uniq
    end

    grid.each_slice(3).map do |stripe|
        stripe.each_slice(3).map do |chunk|
            chunk.transpose
        end
    end.flatten.each_slice(9).to_a.each do |row|
        return false if (row - ['.']) != (row - ['.']).uniq
    end

    true
end
