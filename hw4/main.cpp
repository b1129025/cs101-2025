#include <iostream>

using namespace std;

class TicTacToe {
private:
    char board[9];
    
    bool checkWin(char player) {
        // Check rows
        for (int i = 0; i < 3; i++) {
            if (board[i*3] == player && board[i*3+1] == player && board[i*3+2] == player)
                return true;
        }
        
        // Check columns
        for (int i = 0; i < 3; i++) {
            if (board[i] == player && board[i+3] == player && board[i+6] == player)
                return true;
        }
        
        // Check diagonals
        if (board[0] == player && board[4] == player && board[8] == player)
            return true;
        if (board[2] == player && board[4] == player && board[6] == player)
            return true;
            
        return false;
    }
    
    bool isFull() {
        for (int i = 0; i < 9; i++) {
            if (board[i] != 'X' && board[i] != 'O')
                return false;
        }
        return true;
    }
    
    void displayBoard() {
        printf(" %c | %c | %c \n", board[0], board[1], board[2]);
        printf("---+---+---\n");
        printf(" %c | %c | %c \n", board[3], board[4], board[5]);
        printf("---+---+---\n");
        printf(" %c | %c | %c \n", board[6], board[7], board[8]);
    }
    
public:
    TicTacToe() {
        // Initialize the board with numbers 1-9
        for (int i = 0; i < 9; i++) {
            board[i] = '1' + i;
        }
        
        // Display the initial game state
        printf("-- Tic Tac Toe -- CSIE@CGU\n");
        printf("Player 1 (X) - Player 2 (O)\n");
        displayBoard();
    }
    
    void play() {
        int pos;
        char currentPlayer = 'X';
        int playerNum = 1;
        
        while (true) {
            printf("==> Player %d (%c), enter a number:", playerNum, currentPlayer);
            scanf("%d", &pos);
            
            // Check if the position is valid
            if (pos < 1 || pos > 9 || board[pos-1] == 'X' || board[pos-1] == 'O') {
                printf("==> Invalid value, please enter again\n");
                continue;
            }
            
            // Update the board
            board[pos-1] = currentPlayer;
            displayBoard();
            
            // Check for win
            if (checkWin(currentPlayer)) {
                printf("==> Player %d wins!\n", playerNum);
                break;
            }
            
            // Check for draw
            if (isFull()) {
                printf("==> Game draw\n");
                break;
            }
            
            // Switch player
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            playerNum = (playerNum == 1) ? 2 : 1;
        }
    }
};

int main() {
    TicTacToe game;
    game.play();
    return 0;
}