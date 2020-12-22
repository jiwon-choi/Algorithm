'''
 # https://programmers.co.kr/learn/courses/30/lessons/42842
'''

import math


def solution(brown, yellow):
    divisor = []
    for i in range(1, int(math.sqrt(yellow)) + 1):
        if yellow % i == 0:
            divisor.append((yellow // i, i))
    for x, y in divisor:
        if (x + y) * 2 + 4 == brown:
            return [x + 2, y + 2]
