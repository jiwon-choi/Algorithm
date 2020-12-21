'''
 # https://programmers.co.kr/learn/courses/30/lessons/42578
'''


import collections


def solution(clothes):
    answer = 1
    dic = collections.defaultdict(int)
    for c in clothes:
        dic[c[1]] += 1
    for key in dic:
        answer *= dic[key] + 1
    return answer - 1
