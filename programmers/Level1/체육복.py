'''
 # https://programmers.co.kr/learn/courses/30/lessons/42862
'''

import copy


def solution(n, lost, reserve):
    answer = -2

    copy_lost = copy.deepcopy(lost)
    for i in copy_lost:
        if i in reserve:
            lost.remove(i)
            reserve.remove(i)

    result = [0 for i in range(n+2)]

    for i in range(n+2):
        if i not in lost:
            result[i] += 1

    copy_reserve = copy.deepcopy(reserve)
    for i in copy_reserve:
        if result[i-1] + result[i+1] == 1:
            if result[i-1] == 0:
                result[i-1] += 1
            else:
                result[i+1] += 1
            reserve.remove(i)
        elif result[i-1] + result[i+1] == 2:
            reserve.remove(i)

    copy_reserve = copy.deepcopy(reserve)
    for i in copy_reserve:
        if result[i-1] == 0:
            result[i-1] += 1
        else:
            result[i+1] += 1

    for i in result:
        answer += i

    return answer
