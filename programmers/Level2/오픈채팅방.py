'''
 # https://programmers.co.kr/learn/courses/30/lessons/42888
'''


import collections


def solution(record):
    answer = []
    parse = [r.split() for r in record]
    dic = collections.defaultdict(str)

    for x in parse:
        if x[0] == 'Enter' or x[0] == 'Change':
            dic[x[1]] = x[2]

    for x in parse:
        if x[0] == 'Enter':
            answer.append(dic[x[1]] + '님이 들어왔습니다.')
        elif x[0] == 'Leave':
            answer.append(dic[x[1]] + '님이 나갔습니다.')

    return answer
