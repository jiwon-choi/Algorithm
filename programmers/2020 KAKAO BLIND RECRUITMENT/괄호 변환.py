'''
 # https://programmers.co.kr/learn/courses/30/lessons/60058
'''


def check(u):  # 올바른 괄호 문자열인지 판단
    check = 0
    for ch in u:
        if ch == '(':
            check += 1
        else:
            check -= 1
        if check < 0:
            return False
    return True


def solution(p):
    if p == '':  # 빈 문자열 반환
        return ''
    left = 0
    right = 0
    u = ''
    v = ''
    for ch in p:  # u와 v로 분리
        if left > 0 and right > 0 and left == right:
            v += p[left + right:]
            break
        elif ch == '(':
            left += 1
        else:
            right += 1
        u += ch

    if check(u) is True:  # u가 올바른 괄호 문자열인 경우
        return u + solution(v)
    else:
        answer = '(' + solution(v) + ')'
        for ch in u[1:-1]:
            if ch == '(':
                answer += ')'
            else:
                answer += '('
        return answer
