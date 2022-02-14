'''
 # https://programmers.co.kr/learn/courses/30/lessons/64061
'''


def solution(board, moves):
  answer = 0
  stack = []

  # moves의 숫자를 board의 인덱스와 통일하기 위해 모든 요소를 -1
  for i in range(len(moves)):
    moves[i] -= 1

  for i in moves:
    for j in range(len(board)):
      if board[j][i] != 0:  # 인형이 있으면 바구니에 넣는다
        stack.append(board[j][i])
        board[j][i] = 0
        if len(stack) >= 2:  # 바구니에 인형이 둘 이상일 경우
          if stack[-1] == stack[-2]:  # 방금 넣은 인형과 그 전 인형이 같다면 삭제
            stack.pop()
            stack.pop()
            answer += 2
        break

  return answer
