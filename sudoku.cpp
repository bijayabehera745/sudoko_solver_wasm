#include <string>
extern "C" {

// boardStr must be 81 characters
bool isValid(char* board, int row, int col, char c) {
    for (int i = 0; i < 9; i++) {
        if (board[i * 9 + col] == c) return false;
        if (board[row * 9 + i] == c) return false;
        if (board[(3 * (row / 3) + i / 3) * 9 + (3 * (col / 3) + i % 3)] == c) return false;
    }
    return true;
}

bool solve(char* board) {
    for (int i = 0; i < 81; i++) {
        if (board[i] == '.') {
            int row = i / 9;
            int col = i % 9;
            for (char c = '1'; c <= '9'; c++) {
                if (isValid(board, row, col, c)) {
                    board[i] = c;
                    if (solve(board)) return true;
                    board[i] = '.';
                }
            }
            return false;
        }
    }
    return true;
}

void solveSudoku(char* board) {
    solve(board);
}

}
