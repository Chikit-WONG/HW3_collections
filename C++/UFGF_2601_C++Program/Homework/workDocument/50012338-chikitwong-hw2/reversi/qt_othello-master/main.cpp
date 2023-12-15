#include <QtWidgets>
#include <iostream>

class OthelloBoard : public QWidget {
    Q_OBJECT

public:
    OthelloBoard(QWidget* parent = nullptr) : QWidget(parent) {
        // Set up the game board (8x8 grid)
        board.resize(8, QVector<int>(8, 0));
        board[3][3] = board[4][4] = 1;
        board[3][4] = board[4][3] = 2;
        currentPlayer = 1;

        // Create a grid layout for the board
        QGridLayout *gridLayout = new QGridLayout(this);

        // Create buttons for each cell on the board
        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {
                QPushButton* button = new QPushButton(this);
                button->setFixedSize(55, 55);
                buttons[row][col] = button;
                gridLayout->addWidget(button, row, col);
                connect(button, &QPushButton::clicked, this, [this, row, col]() { onButtonClick(row, col); });
            }
        }

        statusBar = new QStatusBar(this);
        game_status = new QLabel(statusBar);
        game_status->setText("current status (turn, scores)");
        game_status->setFixedWidth(600);
        game_status->setFixedHeight(40);
        game_status->setAlignment(Qt::AlignCenter);

        statusBar->addWidget(game_status);

        updateBoard();
    }

    QStatusBar &get_status_bar() const {
        return *statusBar;
    }

private slots:
    void onButtonClick(int row, int col) {
        // Check if the clicked cell is a valid move
        if (isValidMove(row, col)) {
            // Make the move
            board[row][col] = currentPlayer;
            // Flip the opponent's pieces
            flipOpponentPieces(row, col);
            // Switch players
            currentPlayer = (currentPlayer == 1) ? 2 : 1;
            // Update the game status
            updateGameStatus();
            // Update the board UI
            updateBoard();
        }
    }

private:
    QLabel *game_status;
    QStatusBar *statusBar;

    QVector<QVector<int>> board; // 0 for empty, 1 for black, 2 for white
    QPushButton* buttons[8][8];
    int currentPlayer; // 1 for black, 2 for white

    // Function to update the board UI based on the 'board' data
    void updateBoard() {
        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {
                int cellValue = board[row][col];
                QString buttonText = (cellValue == 1) ? "●" : (cellValue == 2) ? "○" : "";
                                                              buttons[row][col]->setText(buttonText);
            }
        }
    }

    // Function to check if a move is valid
    bool isValidMove(int row, int col) {
        // Check if the cell is empty
        if (board[row][col] != 0)
            return false;

        // Check if there is an adjacent opponent's piece in any direction
        for (int dr = -1; dr <= 1; dr++) {
            for (int dc = -1; dc <= 1; dc++) {
                // Skip the current cell
                if (dr == 0 && dc == 0)
                    continue;

                int r = row + dr;
                int c = col + dc;

                // Check if the adjacent cell is within the board bounds
                if (r >= 0 && r < 8 && c >= 0 && c < 8) {
                    int opponent = (currentPlayer == 1) ? 2 : 1;
                    // Check if the adjacent cell contains the opponent's piece
                    if (board[r][c] == opponent) {
                        // Move in the current direction until an empty cell or the current player's piece is found
                        while (r >= 0 && r < 8 && c >= 0 && c < 8) {
                            if (board[r][c] == currentPlayer)
                                return true;
                            if (board[r][c] == 0)
                                break;
                            r += dr;
                            c += dc;
                        }
                    }
                }
            }
        }

        return false;
    }

    // Function to flip the opponent's pieces after a move
    void flipOpponentPieces(int row, int col) {
        for (int dr = -1; dr <= 1; dr++) {
            for (int dc = -1; dc <= 1; dc++) {
                // Skip the current cell
                if (dr == 0 && dc == 0) continue;

                int r = row + dr;
                int c = col + dc;

                // Check if the adjacent cell is within the board bounds
                if (r >= 0 && r < 8 && c >= 0 && c < 8) {
                    int opponent = (currentPlayer == 1) ? 2 : 1;
                    // Check if the adjacent cell contains the opponent's piece
                    if (board[r][c] == opponent) {
                        // Move in the current direction until an empty cell or the current player's piece is found
                        while (r >= 0 && r < 8 && c >= 0 && c < 8) {
                            if (board[r][c] == currentPlayer) {
                                // Flip the opponent's pieces between the current cell and the current player's piece
                                while (r != row || c != col) {
                                    r -= dr;
                                    c -= dc;
                                    board[r][c] = currentPlayer;
                                }
                                break;
                            }
                            if (board[r][c] == 0)
                                break;
                            r += dr;
                            c += dc;
                        }
                    }
                }
            }
        }
    }

    // Function to update the game status
    void updateGameStatus() {
        int blackCount = 0;
        int whiteCount = 0;

        // Count the number of black and white pieces on the board
        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {
                if (board[row][col] == 1)
                    blackCount++;
                else if (board[row][col] == 2)
                    whiteCount++;
            }
        }

        // Update the game status text
        QString statusText = QString("Current Turn: %1 | Black: %2 | White: %3").arg((currentPlayer == 1) ? "Black" : "White").arg(blackCount).arg(whiteCount);
        game_status->setText(statusText);
    }
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    OthelloBoard board;
    board.setWindowTitle("Othello");
    board.setFixedSize(480, 480);
    board.show();

    return app.exec();
}

#include "main.moc"
