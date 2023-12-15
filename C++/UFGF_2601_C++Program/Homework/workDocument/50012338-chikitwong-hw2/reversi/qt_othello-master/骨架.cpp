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
        // TODO:
        // Implement game logic for button click events
        // - Check for valid moves
        // - Update the game board
        // - Switch players or perform other relevant actions


        std::cout << " row " << row << " " << " column " << col << std::endl;
        
        board[row][col] = 1;
        updateBoard();
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
                QString buttonText = (cellValue == 1) ? "¡ñ" : (cellValue == 2) ? "¡ð" : "";
                buttons[row][col]->setText(buttonText);
            }
        }
    }
};


class MyConfig {
public:
    QString username;
    int port;
    bool enableFeature;
    // Add or modify the config information if you need them. 

    friend std::ostream& operator<<(std::ostream& out, const MyConfig& config);
};

std::ostream& operator<<(std::ostream& out, const MyConfig& config) {
    out << "Username: " << config.username.toStdString() << std::endl;
    out << "Port: " << config.port << std::endl;
    out << "Enable Feature: " << (config.enableFeature ? "Yes" : "No") << std::endl;
    
    // Add more output for additional configuration parameters as needed
    return out;
}



class ConfigDialog : public QDialog {
    Q_OBJECT

public:
    ConfigDialog(QWidget* parent = nullptr) : QDialog(parent) {
        setWindowTitle("Configuration Dialog");
        setFixedSize(300, 200);

        QFormLayout* formLayout = new QFormLayout(this);

        usernameLineEdit = new QLineEdit(this);
        portLineEdit = new QLineEdit(this);
        enableFeatureCheckBox = new QCheckBox("Enable Feature", this);

        formLayout->addRow("Username:", usernameLineEdit);
        formLayout->addRow("Port:", portLineEdit);
        formLayout->addRow(enableFeatureCheckBox);

        okButton = new QPushButton("OK", this);
        cancelButton = new QPushButton("Cancel", this);

        connect(okButton, &QPushButton::clicked, this, &ConfigDialog::accept);
        connect(cancelButton, &QPushButton::clicked, this, &ConfigDialog::reject);

        QDialogButtonBox* buttonBox = new QDialogButtonBox(Qt::Horizontal, this);
        buttonBox->addButton(okButton, QDialogButtonBox::AcceptRole);
        buttonBox->addButton(cancelButton, QDialogButtonBox::RejectRole);

        formLayout->addRow(buttonBox);
    }

    const MyConfig& getConfig() const {
        return config;
    }

private slots:
    void accept() override {
        // Collect the configuration settings into the MyConfig object
        config.username = usernameLineEdit->text();
        config.port = portLineEdit->text().toInt();
        config.enableFeature = enableFeatureCheckBox->isChecked();

        // You can now use the 'config' object with the configuration settings.
        // For example, you can save it or apply the settings to your application.

        // Close the dialog
        QDialog::accept();
    }

    

private:
    MyConfig config; 

    // The lines in the config pop-up. 
    QLineEdit* usernameLineEdit;  
    QLineEdit* portLineEdit;
    QCheckBox* enableFeatureCheckBox;


    QPushButton* okButton;
    QPushButton* cancelButton;
};





class MyMainWindow : public QMainWindow {
    Q_OBJECT

public:
    MyMainWindow(QWidget *parent = nullptr) : QMainWindow(parent) {
        createMenu();
        setWindowTitle("Reversi Game");
        setFixedSize(600, 600);

        // Central widget for the main window
        OthelloBoard *board = new OthelloBoard(this);
        setCentralWidget(board);
        setStatusBar(&board->get_status_bar());
        
        createConfigDialog();
    }

private slots:
    void openConfigDialog() {
        configDialog->show();
        int result = configDialog->exec(); 
        if (result == QDialog::Accepted) {
            std::cout << configDialog->getConfig()  << std::endl;
            // The dialog was accepted
        } else {
            // The dialog was rejected (e.g., user clicked Cancel)
        }
    }

    void showAboutDialog() {
        // Implement showing the About dialog here
        QMessageBox::about(this, "About", "UFUG2601 (L1) - C++ Programming ");
    }

private:
    void createConfigDialog() {
        configDialog = new ConfigDialog(this);
    }

    void createMenu() {
        // Create the main menu bar
        QMenuBar *menuBar = new QMenuBar(this);
        setMenuBar(menuBar);

        // "File" menu
        QMenu *fileMenu = menuBar->addMenu("File");

        QAction *exitAction = new QAction("Exit", this);
        fileMenu->addAction(exitAction);
        connect(exitAction, &QAction::triggered, this, &QApplication::quit);

        // "Config" menu
        QMenu *configMenu = menuBar->addMenu("Config");

        QAction *configAction = new QAction("Open Config Dialog", this);
        configMenu->addAction(configAction);
        connect(configAction, &QAction::triggered, this, &MyMainWindow::openConfigDialog);

        // "About" menu
        QMenu *aboutMenu = menuBar->addMenu("About");

        QAction *aboutAction = new QAction("About This Program", this);
        aboutMenu->addAction(aboutAction);
        connect(aboutAction, &QAction::triggered, this, &MyMainWindow::showAboutDialog);
    }

    ConfigDialog *configDialog; 
};



int main(int argc, char** argv) {
    QApplication app(argc, argv);
    MyMainWindow mainWindow;
    
    mainWindow.show();
    

    return app.exec();
}



#include "main.moc"



