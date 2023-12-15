#coding:GBK
# ��������Ϸ

# ��ʼ������
board = [' '] * 9

# ���微�������̵�����ӳ��
board_mapping = {
    '1': 6, '2': 7, '3': 8,
    '4': 3, '5': 4, '6': 5,
    '7': 0, '8': 1, '9': 2
}

# ����ɻ�ʤ�����
winning_combinations = [
    # ˮƽ��
    [0, 1, 2], [3, 4, 5], [6, 7, 8],
    # ��ֱ��
    [0, 3, 6], [1, 4, 7], [2, 5, 8],
    # �Խ���
    [0, 4, 8], [2, 4, 6]
]

# ��������
def draw_board(board):
    print('-------------')
    print('|', board[6], '|', board[7], '|', board[8], '|')
    print('-------------')
    print('|', board[3], '|', board[4], '|', board[5], '|')
    print('-------------')
    print('|', board[0], '|', board[1], '|', board[2], '|')
    print('-------------')

# �ж��Ƿ��ʤ
def check_win(board, player):
    for combination in winning_combinations:
        if all(board[i] == player for i in combination):
            return True
    return False

# ��Ϸ��ѭ��
def play_game():
    current_player = 'X'
    while True:
        draw_board(board)
        print("�ֵ����", current_player, "���塣")
        position = input("��ѡ��Ҫ�����λ��(1-9): ")

        if position not in board_mapping:
            print("��Ч��λ�ã�������ѡ��")
            continue

        index = board_mapping[position]
        if board[index] != ' ':
            print("��λ���Ѿ������ӣ�������ѡ��")
            continue

        board[index] = current_player

        if check_win(board, current_player):
            draw_board(board)
            print("���", current_player, "��ʤ��")
            break

        # �ж��Ƿ�ƽ��
        if ' ' not in board:
            draw_board(board)
            print("ƽ�֣�")
            break

        # �л����
        current_player = 'O' if current_player == 'X' else 'X'

# ��ʼ��Ϸ
play_game()