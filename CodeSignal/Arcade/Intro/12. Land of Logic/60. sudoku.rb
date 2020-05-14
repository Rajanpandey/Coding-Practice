def sudoku(grid)
    return false unless grid.all? { |line| line.uniq.length == 9 }

    return false unless grid.transpose.all? { |line| line.uniq.length == 9 }

    grid.each_slice(3).all? do |lines|
        lines.transpose.each_slice(3).all? do |block|
            block.flatten.uniq.length == 9
        end
    end
end
