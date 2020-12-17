'''
 # https://programmers.co.kr/learn/courses/30/lessons/60058
'''


def check(u):
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
    if p == '':
        return ''
    left = 0
    right = 0
    u = ''
    v = ''
    for ch in p:
        if left > 0 and right > 0 and left == right:
            v += p[left + right:]
            break
        elif ch == '(':
            left += 1
        else:
            right += 1
        u += ch

    if check(u) is True:
        return u + solution(v)
    else:
        answer = '(' + solution(v) + ')'
        for ch in u[1:-1]:
            if ch == '(':
                answer += ')'
            else:
                answer += '('
        return answer
