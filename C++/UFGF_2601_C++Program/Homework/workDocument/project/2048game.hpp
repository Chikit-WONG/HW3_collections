#ifndef GAME2048_H
#define GAME2048_H
#include<iostream>
#include<limits>
#include<ctime>
#include<string>
#include<vector>
#include<fstream>
#include<conio.h>
using namespace std;

class Game2048
{
public:
	Game2048();
	void use_CLI_to_play_game();
	void use_CLI_to_play_game2();
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

	double probability;
	int WinningNumber;
	bool IsNewGame;
	int max_grid;
	int score ;
	int highest_score;
	vector<vector<int>> board;
	string fileName;
};

#endif