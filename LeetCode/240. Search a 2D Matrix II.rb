# @param {Integer[][]} matrix
# @param {Integer} target
# @return {Boolean}
def search_matrix(matrix, target)
    matrix.each_with_index do |row, idx1|
        return false if (row[0] > target)
        return true if row.bsearch { |value| target <=> value }
    end
    
    false
end
