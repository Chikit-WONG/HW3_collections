def check(board):
    i=0
    j=0
    a=0
    for i in range(0,3):
        if board[i][0]==board[i][1]==board[i][2]=='X':
            a=1
        elif board[i][0]==board[i][1]==board[i][2]=='O':
            a=2
    for j in range(0,3):
        if board[0][j]==board[1][j]==board[2][j]=='X':
            a=1
        elif board[0][j]==board[1][j]==board[2][j]=='O':
            a=2
    if board[0][0]==board[1][1]==board[2][2]=='X' or board[0][2]==board[1][1]==board[2][0]=='X':
        a=1
    elif board[0][0]==board[1][1]==board[2][2]=='O' or board[0][2]==board[1][1]==board[2][0]=='O':
        a=2
    return a   


def addx():
    print('Player1:')
    a=int(input())
    b=int(input())
    if board[a][b]==' ':
        board[a][b]='X'
    else:
        print('error,try again')
        addx()


def addo():
    print('Player2:')
    a=int(input())
    b=int(input())
    if board[a][b]==' ':
        board[a][b]='O'
    else:
        print('error,try again')
        addo()  


def show_board(board):
    for row in board:
        print(row)


board=[[' ',' ',' '],
       [' ',' ',' '],
       [' ',' ',' ']]
is_end=0
show_board(board)
while 1:
    addx()
    show_board(board)
    is_end=check(board)
    if is_end==1:
        print('Player1 Win')
        break
    addo()
    show_board(board)
    check(board)
    if is_end==2:
        print('Player2 Win')
        break
    print(is_end)

