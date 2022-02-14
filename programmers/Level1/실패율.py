'''
 # https://programmers.co.kr/learn/courses/30/lessons/42889
'''


def solution(N, stages):
    result = {}
    man = len(stages)
    for i in range(1, N+1):
        if stages.count(i) == 0:
            result[i] = 0
            continue
        result[i] = stages.count(i) / man
        man -= stages.count(i)
    answer = sorted(result, key=lambda x: result[x], reverse=True)
    return answer
