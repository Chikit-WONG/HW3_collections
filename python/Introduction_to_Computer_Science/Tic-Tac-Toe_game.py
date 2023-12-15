# def next_move(board):
#     black1=0
#     white2=0
#     for row in board:
#         for col in row:
#             if col==1:
#                 black1+=1
#             elif col==2:
#                 white2+=1
#     if black1<=white2:
#         for row in board:
#             for col in row:
#                 if col==0:
#                     return (row,col)
#     elif black1>white2:
#         for row in board:
#             for col in row:
#                 if col==0:
#                     return (row,col)
                
# board=[[0,0,0],[0,0,0],[0,0,0]]



# """
# 你的代码存在一个问题，你的 return (row, col) 语句中,row 是一个列表(list),而不是一个具体的行索引。在你的代码中,row 代表 board 中的每一行，而不是行的索引。
# """
# def next_move(board):
#     for row in board:
#         for col in row:
#             if col==0:
#                 return (row,col)

#for row in board:
#     for col in row:
#         print(type(col))
            
def next_move(board):
    for i, row in enumerate(board):
        for j, col in enumerate(row):
            if col == 0:
                return i, j
    return 0,0

# board = [[0, 0, 0], [0, 0, 0], [0, 0, 0]]
# x, y = next_move(board) 
# assert x >= 0 and x <= 2
# assert y >= 0 and y <= 2

# board = [[0, 1, 2], [1, 2, 0], [1, 0, 2]]
# x, y = next_move(board) 
# assert x >= 0 and x <= 2
# assert y >= 0 and y <= 2

# board = [[1, 1, 2], [2, 2, 1], [1, 2, 0]]
# x, y = next_move(board) 
# assert x >= 0 and x <= 2
# assert y >= 0 and y <= 2

# board = [[1, 1, 2], [2, 2, 1], [1, 2, 1]]
# x, y = next_move(board) 
# assert x >= 0 and x <= 2
# assert y >= 0 and y <= 2

# print(next_move(board))
# assert next_move(board) is not None

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