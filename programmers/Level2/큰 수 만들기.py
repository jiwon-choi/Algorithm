'''
 # https://programmers.co.kr/learn/courses/30/lessons/42883
'''

def solution(number, k):
    answer = []
    cnt = 0
    for nu in number:
        if (cnt == k):
            answer.append(nu)
        else:
            for an in reversed(answer):
                if (cnt == k or an >= nu):
                    break
                answer.pop()
                cnt += 1
            answer.append(nu)
    if (cnt != k):
        for i in range(k):
            answer.pop()
    answer = ''.join(answer)
    return answer