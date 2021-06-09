class Solution {
public:
    int n, m;
    
    bool game(vector<vector<char>>& board, int i, int j, string word, int k) {
        if (i < 0 || j < 0 || i >= n || j >= m || board[i][j] != word[k]) return false;
        
        if (k == word.size() - 1) return true;
        
        char curr = board[i][j];
        board[i][j] = '*';
        
        bool searchNext = game(board, i, j + 1, word, k + 1)
                       || game(board, i, j - 1, word, k + 1)
                       || game(board, i + 1, j, word, k + 1)
                       || game(board, i - 1, j, word, k + 1);

        board[i][j] = curr;
        
        return searchNext;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        n = board.size(), m = board[0].size();
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (game(board, i, j, word, 0)) {
                    return true;
                }
            }
        }
        
        return false;
    }
};
