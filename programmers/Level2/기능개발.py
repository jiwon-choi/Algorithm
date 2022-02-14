'''
 # https://programmers.co.kr/learn/courses/30/lessons/42586
'''


def solution(progresses, speeds):
    answer = []

    while progresses:
        for i in range(len(progresses)):
            progresses[i] += speeds[i]
        cnt = 0
        while progresses and progresses[0] >= 100:
            cnt += 1
            progresses.pop(0)
            speeds.pop(0)
        if cnt != 0:
            answer.append(cnt)

    return answer

def solution(progresses, speeds):
    answer = []
    day = 0
    for i, p in enumerate(progresses):
        while p + speeds[i] * day < 100:
            day += 1
            answer.append(0)
        answer[-1] += 1
    return [n for n in answer if not n == 0]
