'''
 # https://programmers.co.kr/learn/courses/30/lessons/12973
'''


def solution(s):
    stack = []
    for ch in s:
        if stack and ch == stack[-1]:
            stack.pop()
        else:
            stack.append(ch)
    return 0 if len(stack) > 0 else 1
