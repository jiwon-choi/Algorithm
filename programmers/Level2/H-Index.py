'''
 # https://programmers.co.kr/learn/courses/30/lessons/42747
'''


def solution(citations):
    for n in range(len(citations), -1, -1):
        cnt = 0
        for c in citations:
            if c >= n:
                cnt += 1
        if cnt >= n:
            return n
    return len(citations)
