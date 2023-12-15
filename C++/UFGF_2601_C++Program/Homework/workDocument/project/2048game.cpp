#include"2048game.hpp"
#include<iostream>
using namespace std;

Game2048::Game2048()
{
	this->fileName = "2048_Game_Progress.txt";
	ifstream ifs;
	ifs.open(this->fileName, ios::in);
	this->max_grid = 4;
	this->board.resize(this->max_grid, vector<int>(this->max_grid, 0));

	
	/*this->score = 0;
	this->board.resize(this->max_grid, vector<int>(this->max_grid, 0));
	this->filename = "2048_game_progress.txt";*/
	if (!ifs.is_open())
	{
		this->score = 0;
		this->highest_score = 0;
		this->IsNewGame = true;
		ifs.close();
		return;
	}

	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		this->score = 0;
		this->highest_score = 0;
		this->IsNewGame = true;
		ifs.close();
		return;
	}

	for (int i = 0; i < this->max_grid; i++)
	{
		for (int j = 0; j < this->max_grid; j++)
		{
			ifs >> board[i][j];
		}
	}
	
	ifs >> IsNewGame;
	ifs >> score;
	ifs >> highest_score;
	ifs >> probability;
	ifs >> WinningNumber;
	ifs.close();
}

void Game2048::use_CLI_to_play_game()
{
	this->CreateNumber();
	this->CreateNumber();
	std::cout << "Use W (up), A (left), S (down), D (right) to move the tiles. Press Q to quit." << endl;
	while (!this->IsGameOver())
	{
		this->printBoard();
		char key = _getwch();
		this->GameControl(key);
	}
}

void Game2048::use_CLI_to_play_game2()
{
	restart:
	newGame:
	if (this->IsNewGame)
	{
		system("clear");

		bool CheckProbability = true;
		while(CheckProbability)
		{
			std::cout << "Probability of occourrence of 4(the propability need to be greater than 0 and less than 1):" << endl;
			std::cin >> this->probability;
			if (!this->IsProbabilityValid())
			{
				std::cout << "Invalid input,please try again:" << endl;
			}
			else
			{
				CheckProbability = false;
			}
		}
		

		bool CheckWinningNumber = true;
		while (CheckWinningNumber)
		{
			std::cout << "The winning score to achieve(1.the number need to be a power of two. 2.The smallest number is 2 and the biggest number is 131072)" << endl;
			std::cin >> this->WinningNumber;
			if (!this->IsWinningNumberValid(this->WinningNumber))
			{
				std::cout << "Invalid input,please try again:" << endl;
			}
			else
			{
				CheckWinningNumber = false;
			}
		}

		this->CreateNumber();
		this->CreateNumber();
		system("clear");
		this->IsNewGame = false;
	}

	this->IsNewGame = false;

	while (!this->IsGameOver())
	{
		Continue:
		std::cout << "Use W (up), A (left), S (down), D (right) to move the tiles. Press Q to quit." << endl;
		this->printBoard();
		char key = _getwch();
		if (key == 'Q' || key == 'q')
		{
			system("clear");

		Input_error:
			/*cout << "Do you really want to quit?" << endl;
			cout << "1. Yes" << endl;
			cout << "2. No" << endl;

			int select = 0;
			cin >> select;

			if (select == 1)
			{
				cout << "Do you want to save the process?" << endl;
			}*/
			std::cout << "1. save and quit" << endl;
			std::cout << "2. new game" << endl;
			std::cout << "3. continue playing" << endl;

			char select = _getwch();

			if (select == '1')
			{
				this->save();
				system("clear");
				std::cout << "Welcome to continue playing next time." << endl;
				this->IsNewGame = true;
				exit(0);
			}
			else if (select == '2')
			{
				this->NewGame();
				goto newGame;
			}
			else if (select == '3')
			{
				system("clear");
				goto Continue;
			}
			else
			{
				system("clear");
				std::cout << "Input error, please enter again:" << endl;
				goto Input_error;
			}
		}
		this->GameControl(key);
		system("clear");
	}

	Input_error2:
	std::cout << "1. Newgame" << endl;
	std::cout << "2. Quit" << endl;

	char select = _getwch();
	if (select == '1')
	{
		this->NewGame();
		goto restart;
	}
	else if (select == '2')
	{
		std::cout << "Welcome to continue playing next time." << endl;
		this->NewGame();
		this->save();
		/*ofstream ofs;
		ofs.open(this->fileName, ios::trunc);
		ofs.close();*/
		//不能直接将文件清空，不然最高分也会清除

	}
	else
	{
		system("clear");
		std::cout << "Input error, please enter again:" << endl;
		goto Input_error2;
	}	
}

void Game2048::printBoard()
{
	for (int i = 0; i < this->max_grid; i++)
	{
		for (int j = 0; j < this->max_grid; j++)
		{
			std::cout << "\t" << board[i][j];
		}
		std::cout << endl;
	}
	std::cout << "Score: " << this->score << " Highest score: "<<this->highest_score << ". Next move: ";
}

int Game2048::twoOrFour()
{
	srand((unsigned int)time(NULL));
	int temp = 1 / this->probability;
	return rand() % temp == 0 ? 4 : 2;
}

void Game2048::GameJudge(bool& flag)
{
	if (flag)
		this->CreateNumber();
}

void Game2048::CreateNumber()
{
	srand((unsigned int)time(NULL));
	while (1)
	{
		int x = rand() % this->max_grid;
		int y = rand() % this->max_grid;
		//cout << "x=" << x << " y=" << y << endl;
		if (board[y][x] == 0)
		{
			board[y][x] = this->twoOrFour();
			break;
		}
	}
}

void Game2048::move_up()
{
	std::cout << 'w' << endl;
	//flag的作用：用来判断是否要随机生成一个数字，考虑如果按了up，但没有移动，就不用生成数字
	bool flag = false;
	for (int i = 0; i < this->max_grid; i++) //每一列扫描
	{
	//bool flag2 = true; //flag2的作用：用来判断移动的那一列是否有移动，如果没有flag2，比如 2 2 2 2（当然，这里的代码是列，但为了注释方便，把它当初行），如果按左，应该是4 2 2 0，但如果没有flag2.则会变为4 4 0 0

		for (int temp = 0; temp < this->max_grid; temp++) //temp是目标，看是否能与后面的合并
		{
			for (int begin = temp + 1; begin < this->max_grid; begin++) //begin是后面的元素，看该如何移动（1.与前面元素合并 2.向前移动 3.不移动）
			{
				if (board[begin][i] != 0)
				{
					if (board[temp][i] == 0)
					{
						board[temp][i] = board[begin][i];
						board[begin][i] = 0;
						flag = true;
					}
					else if (board[temp][i] == board[begin][i])
					{
						board[temp][i] += board[begin][i];
						board[begin][i] = 0;
						score += board[temp][i] + board[begin][i];
						flag = true;
						//flag2 = false;
						break;
					}
					else
					{
						if (temp + 1 != begin && board[begin][i] != 0)
						{
							for (int k = temp + 1; k < this->max_grid; k++)
							{
								if (board[k][i] == 0 && board[begin][i] != 0)
								{
									board[k][i] = board[begin][i];
									board[begin][i] = 0;
									flag = true;
								}
							}
							/*board[temp + 1][i] = board[begin][i];
							board[begin][i] = 0;
							flag = true;*/
						}
					}
				}
				//this->printBoard(); //测试用的
			}

		}
		
		
	}
	this->GameJudge(flag);
	//cout << "up" << endl; //test
}

void Game2048::move_down( )
{
	std::cout << 's' << endl;
	bool flag = false;
	for (int i = 0; i < this->max_grid; i++)
	{
		
		for (int temp = this->max_grid-1; temp >= 0; temp--)
		{
			for (int begin = temp - 1; begin >= 0; begin--)
				if (board[begin][i] != 0)
				{
					if (board[temp][i] == 0)
					{
						board[temp][i] = board[begin][i];
						board[begin][i] = 0;
						flag = true;
					}
					else if (board[temp][i] == board[begin][i])
					{
						board[temp][i] += board[begin][i];
						board[begin][i] = 0;
						score += board[temp][i] + board[begin][i];
						flag = true;
						break;
					}
					else
					{
						if (temp - 1 != begin && board[begin][i] != 0)
						{
							for (int k = temp - 1; k >= 0; k--)
							{
								if (board[k][i] == 0 && board[begin][i] != 0)
								{
									board[k][i] = board[begin][i];
									board[begin][i] = 0;
									flag = true;
								}
							}
						}
					}
				}
		}
		
	}
	this->GameJudge(flag);
}


void Game2048::move_left()
{
	std::cout << 'a' << endl;
	bool flag = false;
	for (int i = 0; i < this->max_grid; i++) 
	{
		
		
		for (int temp = 0; temp < this->max_grid; temp++) 
		{
			for (int begin = temp + 1; begin < this->max_grid; begin++) 
			{
				if (board[i][begin] != 0)
				{
					if (board[i][temp] == 0)
					{
						board[i][temp] = board[i][begin];
						board[i][begin] = 0;
						flag = true;
					}
					else if (board[i][temp] == board[i][begin])
					{
						board[i][temp] += board[i][begin];
						board[i][begin] = 0;
						score += board[i][temp] + board[i][begin];
						flag = true;
						break;
					}
					else
					{
						if (temp + 1 != begin && board[i][begin] != 0)
						{
							for (int k = temp + 1; k < this->max_grid; k++)
							{
								if (board[i][k] == 0 && board[i][begin] != 0)
								{
									board[i][k] = board[i][begin];
									board[i][begin] = 0;
									flag = true;
								}
							}
								
						}
					}
				}
			}
		}
		
	}
	this->GameJudge(flag);
}

void Game2048::move_right()
{
	std::cout << 'd' << endl;
	bool flag = false;
	for (int i = 0; i < this->max_grid; i++)
	{
		
		
		for (int temp = this->max_grid-1; temp >= 0; temp--)
		{
			for (int begin = temp - 1; begin >=0; begin--)
			{
				if (board[i][begin] != 0)
				{
					if (board[i][temp] == 0)
					{
						board[i][temp] = board[i][begin];
						board[i][begin] = 0;
						flag = true;
					}
					else if (board[i][temp] == board[i][begin])
					{
						board[i][temp] += board[i][begin];
						board[i][begin] = 0;
						score += board[i][temp] + board[i][begin];
						flag = true;
						break;
					}
					else
					{
						if (temp - 1 != begin && board[i][begin] != 0)
						{
							for (int k = temp - 1; k >= 0; k--)
							{
								if (board[i][k] == 0 && board[i][begin] != 0)
								{
									board[i][k] = board[i][begin];
									board[i][begin] = 0;
									flag = true;
								}
							}

						}
					}
				}
			}
		}
		
	}
	this->GameJudge(flag);
}

void Game2048::GameControl(const wint_t& key)
{
	/*char key = _getwch();*/
	switch (key)
	{
	case 'w':
	case 'W':
	case 56:
	case 72:
		this->move_up();
		break;
	case 's':
	case 'S':
	case 50:
	case 80:
		this->move_down();
		break;
	case 'a':
	case 'A':
	case 52:
	case 75:
		this->move_left();
		break;
	case 'd':
	case 'D':
	case 54:
	case 77:
		this->move_right();
		break;
	default:
		break;
	}
	if (score > highest_score)
	{
		highest_score = score;
	}
}

bool Game2048::IsGameOver()
{
	for (int i = 0; i < this->max_grid; i++)
	{
		for (int j = 0; j < this->max_grid; j++)
		{
			if (board[i][j] == this->WinningNumber)
			{
				this->printBoard();
				std::cout << endl;
				std::cout << "You win!" << endl;
				std::cout << "Press Enter to restart..." << endl;
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cin.ignore(); // 等待用户输入回车
				return true;
			}
		}
	}
	for (int i = 0; i < this->max_grid; i++)
	{
		for (int j = 0; j < this->max_grid; j++)
		{
			if (board[i][j] == 0)
			{
				return false;
			}
			else if (i < this->max_grid - 1 && board[i][j] == board[i + 1][j])
			{
				return false;
			}
			else if (j < this->max_grid - 1 && board[i][j] == board[i][j + 1])
			{
				return false;
			}
		}
	}
	if (board[max_grid - 1][max_grid - 1] == board[max_grid - 2][max_grid - 1] || board[max_grid - 1][max_grid - 1] == board[max_grid - 1][max_grid - 2])
	{
		return false;
	}
	this->printBoard();
	std::cout << endl;
	std::cout << "You Loss" << endl;
	std::cout << "Press Enter to restart..." << endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cin.ignore(); // 等待用户输入回车
	return true;
	
}

void  Game2048::save()
{
	ofstream ofs;
	ofs.open(this->fileName, ios::out);
	ofs << 0 << endl;
	for (int i = 0; i < this->max_grid; i++)
	{
		for (int j = 0; j < this->max_grid; j++)
		{
			ofs <<"\t" << board[i][j];
		}
		ofs << endl;
	}
	ofs << IsNewGame<<" ";
	ofs << score<<" ";
	ofs << highest_score<<" ";
	ofs << probability<<" ";
	ofs << WinningNumber;
	ofs.close();
}

void Game2048::NewGame()
{
	this->score = 0;
	
	for (int i = 0; i < max_grid; i++)
	{
		for (int j = 0; j < max_grid; j++)
		{
			board[i][j] = 0;
		}
	}
	this->IsNewGame = true;
	system("clear");
}

bool Game2048::IsProbabilityValid()
{
	if (0 < this->probability && this->probability < 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Game2048::IsWinningNumberValid(const int &wn)
{
	if (wn<2 && wn > 131072)
	{
		return false;
	}

	if (wn % 2!=0)
	{
		return false;
	}

	if (wn==2)
	{
		return true;
	}

	return IsWinningNumberValid(wn / 2);
}