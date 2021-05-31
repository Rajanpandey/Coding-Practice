class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(), cols = matrix[0].size();
        int i = 0, j = rows ? cols - 1 : 0;

        while (i < rows && 0 <= j) {
            if (matrix[i][j] == target) {
                return true;
            }
            if (matrix[i][j] > target) {
                j--;
            } else {
                i++;
            }
        }

        return false;
    }
};




/*
Simple Ruby solution:

# @param {Integer[][]} matrix
# @param {Integer} target
# @return {Boolean}
def search_matrix(matrix, target)
    matrix.each do |row|
        return false if (row[0] > target)
        return true if row.bsearch { |value| target <=> value }
    end
    
    false
end

*/
