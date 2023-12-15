#include <iostream>
#include <vector>
using namespace std;

void recieve_board(vector<vector<int>> &v)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cin >> v[i][j];
		}
	}
}

void print_board(vector<vector<int>> &v)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << v[i][j] << " ";
		}
		std::cout << endl;
	}
}

void move_up(vector<vector<int>> &board)
{

	int row,col;
    for(row=2;row>=0;row--){
        for(col=0;col<4;col++){
            if(board[row][col]==0){
                for(int i=row;i<3;i++){
                    board[i][col]=board[i+1][col];
                }
                board[3][col]=0;
            }
        }
    }
    for(row=0;row<3;row++){
        for(col=0;col<4;col++){
            if(board[row][col]==board[row+1][col]){
                board[row][col]*=2;
                board[row+1][col]=0;
                
            }
        }
    }
    for(row=2;row>=0;row--){
        for(col=0;col<4;col++){
            if(board[row][col]==0){
                for(int i=row;i<3;i++){
                    board[i][col]=board[i+1][col];
                }
                board[3][col]=0;
            }
        }
    }
}

void move_down(vector<vector<int>> &board)
{
	  int row,col;
    for(row=1;row<4;row++){
        for(col=0;col<4;col++){
            if(board[row][col]==0){
                for(int i=row;i>0;i--){
                    board[i][col]=board[i-1][col];
                }
                board[0][col]=0;
            }
        }
    }
    for(row=3;row>=1;row--){
        for(col=0;col<4;col++){
            if(board[row][col]==board[row-1][col]){
                board[row][col]*=2;
                board[row-1][col]=0;
            }
        }
    }
    for(row=1;row<4;row++){
        for(col=0;col<4;col++){
            if(board[row][col]==0){
                for(int i=row;i>0;i--){
                    board[i][col]=board[i-1][col];
                }
                board[0][col]=0;
            }
        }
    }
}

void move_left(vector<vector<int>> &board)
{

	 int row,col;
    for(row=0;row<4;row++){
        for(col=2;col>=0;col--){
            if(board[row][col]==0){
                for(int i=col;i<3;i++){
                    board[row][i]=board[row][i+1];
                }
                board[row][3]=0;
            }
        }
    }
    for(row=0;row<4;row++){
        for(col=0;col<3;col++){
            if(board[row][col]==board[row][col+1]){
                board[row][col]*=2;
                board[row][col+1]=0;
                
            }
        }
    }
    for(row=0;row<4;row++){
        for(col=2;col>=0;col--){
            if(board[row][col]==0){
                for(int i=col;i<3;i++){
                    board[row][i]=board[row][i+1];
                }
                board[row][3]=0;
            }
        }
    }
}

void move_right(vector<vector<int>> &board)
{
	int row,col;
    for(row=0;row<4;row++){
        for(col=1;col<4;col++){
            if(board[row][col]==0){
                for(int i=col;i>0;i--){
                    board[row][i]=board[row][i-1];
                }
                board[row][0]=0;
            }
        }
    }    
    for(row=0;row<4;row++){
        for(col=3;col>=1;col--){
            if(board[row][col]==board[row][col-1]){
                board[row][col]*=2;
                board[row][col-1]=0;
               
            }

        }
    }
    for(row=0;row<4;row++){
        for(col=1;col<4;col++){
            if(board[row][col]==0){
                for(int i=col;i>0;i--){
                    board[row][i]=board[row][i-1];
                }
                board[row][0]=0;
            }
        }
    }    
}

void game_control(vector<vector<int>> &v, const char &direction)
{
	switch (direction)
	{
	case 'U':
	{
		move_up(v);
		break;
	}
	case 'D':
	{
		move_down(v);
		break;
	}
	case 'L':
	{
		move_left(v);
		break;
	}
	case 'R':
	{
		move_right(v);
		break;
	}
	default:
		break;
	}
}

int main()
{
	vector<vector<int>> v(4, vector<int>(4, 0));
	recieve_board(v);

	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		char direction;
		std::cin >> direction;
		game_control(v, direction);
	}

	print_board(v);

	return 0;
}