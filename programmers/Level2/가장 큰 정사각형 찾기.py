'''
 # https://programmers.co.kr/learn/courses/30/lessons/12905
'''


def solution(board):
    answer = 0
    if len(board) == 1 or len(board[0]) == 1:
        return 1
    for i in range(1, len(board)):
        for j in range(1, len(board[0])):
            if board[i][j] != 0:
                minimum = min(board[i-1][j], board[i][j-1], board[i-1][j-1])
                board[i][j] = minimum + 1
                if answer < board[i][j]:
                    answer = board[i][j]
    return answer ** 2
