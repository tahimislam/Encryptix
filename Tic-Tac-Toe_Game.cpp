#include <bits/stdc++.h>
using namespace std;

// Function to display the game board
void displayBoard(char board[3][3]) {
    cout << "\nCurrent Board:\n" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        cout << endl;
        if (i < 2) cout << "--|---|--" << endl;
    }
}

// Function to check if a player has won
bool checkWin(char board[3][3], char player) {
    // Check rows, columns, and diagonals
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}

// Function to check if the game is a draw
bool checkDraw(char board[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

// Function to play the Tic-Tac-Toe game
void playTicTacToe() {
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char currentPlayer = 'X';
    bool gameOngoing = true;

    cout << "\nWelcome to Tic-Tac-Toe!\n" << endl;

    while (gameOngoing) {
        displayBoard(board);
        int row, col;
        cout << "\nPlayer " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        if (row >= 1 && row <= 3 && col >= 1 && col <= 3 && board[row - 1][col - 1] == ' ') {
            board[row - 1][col - 1] = currentPlayer;

            if (checkWin(board, currentPlayer)) {
                displayBoard(board);
                cout << "\nPlayer " << currentPlayer << " wins!" << endl;
                gameOngoing = false;
            } else if (checkDraw(board)) {
                displayBoard(board);
                cout << "\nThe game is a draw!" << endl;
                gameOngoing = false;
            } else {
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            }
        } else {
            cout << "\nInvalid move. Try again." << endl;
        }
    }
}

int main() {
    playTicTacToe();
    return 0;
}

