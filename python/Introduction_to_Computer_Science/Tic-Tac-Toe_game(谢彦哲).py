def next_move(board):
    def ifwinner(board, player):
        
        if board[0][0] == board[2][2] == board[1][1] == player or board[0][2] == board[1][1] == board[2][0] == player:
            return True
        
        for i in range(3):
            if all([board[i][j] == player for j in range(3)]) or all([board[j][i] == player for j in range(3)]):
                return True
        return False
    





    def move(player):
        for x in range(3):
            for y in range(3):
                if board[x][y] == 0:
                    board[x][y] = player
                    if ifwinner(board, player):
                        return (x, y)
                    board[x][y] = 0
        return None
    
    num=0
    for i in range(3):
        for j in range(3):
            if board[i][j]!=0:
                num+=1

    if  num%2==1:            
        
        winmove = move(2)
        if winmove:
            return winmove

        
        blockmove = move(1)
        if blockmove:
            return blockmove

        if board[1][1] == 0:
            return (1, 1) 
        
        
        
        for x, y in [(0, 1), (1, 0), (1, 2), (2, 1)]: 
            if board[x][y] == 0:
                return (x, y)
            


        for x, y in [(0, 0), (0, 2), (2, 0), (2, 2)]:  
            if board[x][y] == 0:
                return (x, y)

        
        return (0,0)

    
    
    
    
    
    elif num%2==0:            
        
        winmove = move(1)
        if winmove:
            return winmove

        
        blockmove = move(2)
        if blockmove:
            return blockmove

      
        if board[1][1] == 0:
            return (1, 1)  
        for x, y in [ (0, 2), (2, 0), (2, 2),(0, 0)]: 
            if board[x][y] == 0:
                return (x, y)
        for x, y in [(0, 1), (1, 0), (2, 1) (1, 2)]: 
            if board[x][y] == 0:
                return (x, y)

        return (0,0)
    
    
board = [[0, 0, 0], [0, 0, 0], [0, 0, 0]]
x, y = next_move(board) 
assert x >= 0 and x <= 2
assert y >= 0 and y <= 2

board = [[0, 1, 2], [1, 2, 0], [1, 0, 2]]
x, y = next_move(board) 
assert x >= 0 and x <= 2
assert y >= 0 and y <= 2

board = [[1, 1, 2], [2, 2, 1], [1, 2, 0]]
x, y = next_move(board) 
assert x >= 0 and x <= 2
assert y >= 0 and y <= 2

board = [[1, 1, 2], [2, 2, 1], [1, 2, 1]]
x, y = next_move(board) 
assert x >= 0 and x <= 2
assert y >= 0 and y <= 2

print(next_move(board))

assert next_move(board) is not None
assert type(next_move(board)) != bool
assert isinstance(next_move(board), tuple)
