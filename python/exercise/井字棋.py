#coding:GBK
# 井字棋游戏

# 初始化棋盘
board = [' '] * 9

# 定义井字棋棋盘的索引映射
board_mapping = {
    '1': 6, '2': 7, '3': 8,
    '4': 3, '5': 4, '6': 5,
    '7': 0, '8': 1, '9': 2
}

# 定义可获胜的组合
winning_combinations = [
    # 水平线
    [0, 1, 2], [3, 4, 5], [6, 7, 8],
    # 垂直线
    [0, 3, 6], [1, 4, 7], [2, 5, 8],
    # 对角线
    [0, 4, 8], [2, 4, 6]
]

# 画出棋盘
def draw_board(board):
    print('-------------')
    print('|', board[6], '|', board[7], '|', board[8], '|')
    print('-------------')
    print('|', board[3], '|', board[4], '|', board[5], '|')
    print('-------------')
    print('|', board[0], '|', board[1], '|', board[2], '|')
    print('-------------')

# 判断是否获胜
def check_win(board, player):
    for combination in winning_combinations:
        if all(board[i] == player for i in combination):
            return True
    return False

# 游戏主循环
def play_game():
    current_player = 'X'
    while True:
        draw_board(board)
        print("轮到玩家", current_player, "下棋。")
        position = input("请选择要下棋的位置(1-9): ")

        if position not in board_mapping:
            print("无效的位置，请重新选择。")
            continue

        index = board_mapping[position]
        if board[index] != ' ':
            print("该位置已经有棋子，请重新选择。")
            continue

        board[index] = current_player

        if check_win(board, current_player):
            draw_board(board)
            print("玩家", current_player, "获胜！")
            break

        # 判断是否平局
        if ' ' not in board:
            draw_board(board)
            print("平局！")
            break

        # 切换玩家
        current_player = 'O' if current_player == 'X' else 'X'

# 开始游戏
play_game()