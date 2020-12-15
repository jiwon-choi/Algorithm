'''
 # https://programmers.co.kr/learn/courses/30/lessons/12899
'''


def solution(n):
    answer = []
    while n != 0:
        n, mod = divmod(n, 3)
        if mod != 0:
            answer.append(str(mod))
        else:
            answer.append('4')
            n -= 1
    answer.reverse()
    answer = ''.join(answer)
    return answer
