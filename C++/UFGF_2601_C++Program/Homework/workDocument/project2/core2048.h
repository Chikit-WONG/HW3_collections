#ifndef CORE2048_H
#define CORE2048_H

#include <QtWidgets>
#include <random>
#include <ctime>
#include<iostream>
#include<limits>
#include<ctime>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

class Core2048 : public QWidget
{
public:
    Q_OBJECT

    enum
    {
        BoardSize = 4
    };
    enum Direction
    {
        Up,
        Down,
        Left,
        Right
    };

public:
    double probability;
    int WinningNumber;
    bool IsNewGame;
    int max_grid;
    int score ;
    int highest_score;
    vector<vector<int>> board1;
    string fileName;
    QLabel *scoreLabel;

    //std::default_random_engine generator;
    std::random_device rd;
    std::mt19937 generator;

public:
    QVector<QVector<int>> board2;
    QVector<QVector<QLabel *>> labels;

public:
//    Core2048();
    void use_CLI_to_play_game();
    void use_CLI_to_play_game2();
    void use_GUI_to_play_game();
    void printBoard();
    int twoOrFour();
    void GameJudge(bool& flag);
    void CreateNumber();
    void move_up();
    void move_down();
    void move_left();
    void move_right();
    void GameControl(const wint_t &key);
    bool IsGameOver();
    void save();
    void NewGame();
    bool IsProbabilityValid();
    bool IsWinningNumberValid(const int &wn);

public:
    void keyPressEvent(QKeyEvent *event) override;
    void paintEvent(QPaintEvent *event) override;
    void newGame();
    void move(Direction direction);
    void addRandom();
    void updateLabels();
    bool canMerge();

public:

    Core2048(QWidget *parent = nullptr);


};

#endif // CORE2048_H
