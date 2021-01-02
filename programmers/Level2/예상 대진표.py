'''
 # https://programmers.co.kr/learn/courses/30/lessons/12985
'''


import math


def solution(n, a, b):
    answer = 1
    while abs(a - b) != 1 or a // 2 == b // 2:
        a, b = math.ceil(a / 2), math.ceil(b / 2)
        answer += 1
    return answer
