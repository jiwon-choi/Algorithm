'''
 # https://programmers.co.kr/learn/courses/30/lessons/60058
'''


def correct(u):
    cnt = 0
    for i in u:
        if i == '(':
            cnt += 1
        else:
            cnt -= 1
        if cnt < 0:
            return False
    return True


def balanced(w):
    L, R = 0, 0
    for i in w:
        if i == '(':
            L += 1
        else:
            R += 1
        if L == R:
            break
    return L + R


def solution(p):
    if p == '':
        return ''

    split_point = balanced(p)
    u, v = p[:split_point], p[split_point:]

    if correct(u):
        return u + solution(v)
    else:
        new = '(' + solution(v) + ')'
        for ch in u[1:-1]:
            if ch == '(':
                new += ')'
            else:
                new += '('
        return new
