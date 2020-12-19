'''
 # https://programmers.co.kr/learn/courses/30/lessons/42626
'''


import heapq


def solution(scoville, K):
    answer = 0
    heapq.heapify(scoville)
    while True:
        if len(scoville) == 1 and scoville[0] < K:
            return -1
        s1 = heapq.heappop(scoville)
        s2 = heapq.heappop(scoville)
        heapq.heappush(scoville, s1 + s2 * 2)
        answer += 1
    return answer
