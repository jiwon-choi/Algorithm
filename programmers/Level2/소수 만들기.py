'''
 # https://programmers.co.kr/learn/courses/30/lessons/12977
'''

from itertools import combinations


def solution(nums):
    sum_list = list(sum(c) for c in combinations(nums, 3))
    cnt = 0
    for n in sum_list:
        for i in range(2, n):
            if n % i == 0:
                cnt += 1
                break
    return len(sum_list) - cnt
