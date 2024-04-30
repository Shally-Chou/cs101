/******************************************************************************
O X 遊戲的程式碼  超尼瑪難 好快樂 感覺快沒了
*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

class TicTacToe {
private:
    vector<vector<char>> board;
    char currentPlayer;
    bool gameOver;

public:
    TicTacToe() {
        board = vector<vector<char>>(3, vector<char>(3, ' '));
        currentPlayer = 'X';
        gameOver = false;
        cout << "-- Tic Tac Toe -- CSIE@CGU\n";
        cout << "Player 1 (X) - Player 2 (O)\n";
    }

    void printBoard() {
        int count = 1;                   //錯在最右邊設了邊界 其他都是對的 看不懂就兩個都跑一遍就看的出來了
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    cout << " " << count << " |";
                } else {
                    cout << " " << board[i][j] << " |";
                }
                count++;
            }
            cout << "\n";
            if (i < 2) {
                cout << "---+---+---\n";
            }
        }
    }

    bool isValidMove(int move) {
        int row = (move - 1) / 3;
        int col = (move - 1) % 3;
        return (move >= 1 && move <= 9 && board[row][col] == ' ');
    }

    void makeMove(int move) {
        int row = (move - 1) / 3;
        int col = (move - 1) % 3;
        board[row][col] = currentPlayer;
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    bool checkWin() {
        // 這個是檢查列
        for (int i = 0; i < 3; i++) {
            if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
                return true;
            }
        }

        // 這個檢查行
        for (int i = 0; i < 3; i++) {
            if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
                return true;
            }
        }

        // 這個檢查對角線
        if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
            return true;
        }
        if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
            return true;
        }

        return false;
    }

    bool isBoardFull() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    return false;
                }
            }
        }
        return true;
    }

    void run() {
        while (!gameOver) {
            printBoard();
            int move;
            cout << "==> Player " << ((currentPlayer == 'X') ? "1 (X)" : "2 (O)") << ", enter a number:";
            cin >> move;

            while (!isValidMove(move)) {
                cout << "==> Invalid value, please enter again\n";
                cout << "==> Player " << ((currentPlayer == 'X') ? "1 (X)" : "2 (O)") << ", enter a number:";
                cin >> move;
            }

            makeMove(move);

            if (checkWin()) {
                gameOver = true;
                printBoard();
                cout << "==> Player " << ((currentPlayer == 'X') ? "2 (O)" : "1 (X)") << " wins!\n";
            } else if (isBoardFull()) {
                gameOver = true;
                printBoard();
                cout << "==> Game draw\n";
            }
        }
    }
};

int main() {
    TicTacToe game;
    game.run();
    return 0;
}
