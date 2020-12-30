'''
 # https://programmers.co.kr/learn/courses/30/lessons/12951
'''


def solution(s):
    answer = ""
    s = s.lower()
    for i, ch in enumerate(s):
        if i == 0 or answer[-1] == ' ':
            answer += ch.upper()
        else:
            answer += ch
    return answer
