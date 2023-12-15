#include<iostream>
#include"2048game.hpp"

int main()
{
	Game2048 game;
	game.use_CLI_to_play_game2();
	////cout << game.board[0][0];
	///*for (int i = 0; i < game.max_grid; i++)
	//{
	//	for (int j = 0; j < game.max_grid; j++)
	//	{
	//		cout << game.board[i][j] << " ";
	//	}
	//	cout << endl;
	//}*/
	//cout << game.IsWinningNumberValid(128) << endl;
	/*ofstream ofs;
	ofs.open(game.fileName, ios::trunc);
	ofs.close();*/
	return 0;
}

