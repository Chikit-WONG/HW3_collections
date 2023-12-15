board=[[' ',' ',' '],
       [' ',' ',' '],
       [' ',' ',' ']]
is_end=0

def check_win(board):
    
                
    a=0
    for i in range(0,3):
        if board[i][0]==board[i][1]==board[i][2]=='x':
            a=1
        elif board[i][0]==board[i][1]==board[i][2]=='o':
            a=2
    
    for i in range(0,3):
        if board[0][i]==board[1][i]==board[2][i]=='x':
            a=1
        elif board[0][i]==board[1][i]==board[2][i]=='o':
            a=2
    
    if board[0][0]==board[1][1]==board[2][2]=='x':
        a=1
    elif board[0][0]==board[1][1]==board[2][2]=='o':
        a=2
    
    if a==1:
        print('player1 win')
    elif a==2:
        print('player2 win')
        
    if a!=0:
        return a
    
    count=0
    for i in range(0,3):
        for j in range(0,3):
            if board[i][j]!=' ':
                count+=1
                if count==9:
                    print('score draw')
                    show_board(board)
                    a=3
                    return a

def show_board(board):
    for row in board:
        print(row)
        
def addx():
    print('player1:')
    try:
        a=int(input())
    except:
        print('error,try again.')
        addx()
        return 
    try:
        b=int(input())
    except:
        print('error,try again.')
        addx()
        return 
    try:
        if board[a][b]==' ':
            board[a][b]='x'
        else:
            print('error,try again.')
            addx()
    except:
        print('error,try again.')
        addx()
        return 
    
    
def addo():
    print('player2:')
    try:
        a=int(input())
    except:
        print('error,try again.')
        addo()
        return 
    try:
        b=int(input())
    except:
        print('error,try again.')
        addo()
        return 
    try:
        if board[a][b]==' ':
            board[a][b]='o'
        else:
            print('error,try again.')
            addo()
    except:
        print('error,try again')
        addo()
        return
    
    
    

show_board(board)
while 1:
    addx()
    show_board(board)
    if(check_win(board)):
        break
    addo()
    show_board(board)
    if(check_win(board)):
        break
    
    