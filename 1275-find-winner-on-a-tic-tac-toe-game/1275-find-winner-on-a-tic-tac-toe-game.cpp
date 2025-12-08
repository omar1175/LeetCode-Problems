class Solution {
public:
  string tictactoe(vector<vector<int>>& moves) {
    // Initialize a 3x3 board with 0 (empty)
    vector<vector<int>> board(3, vector<int>(3, 0));
    
    // Fill the board with moves
    for (int i = 0; i < moves.size(); ++i) {
        int r = moves[i][0];
        int c = moves[i][1];
        board[r][c] = (i % 2 == 0) ? 1 : 2; // 1 = A, 2 = B
    }
    
    // Check rows, columns, and diagonals
    for (int i = 0; i < 3; ++i) {
        // Check row
        if (board[i][0] != 0 && board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return board[i][0] == 1 ? "A" : "B";
        // Check column
        if (board[0][i] != 0 && board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return board[0][i] == 1 ? "A" : "B";
    }
    // Check diagonals
    if (board[0][0] != 0 && board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return board[0][0] == 1 ? "A" : "B";
    if (board[0][2] != 0 && board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return board[0][2] == 1 ? "A" : "B";
    
    // If all moves are played and no winner
    if (moves.size() == 9) return "Draw";
    
    // Game is still pending
    return "Pending";
}
};