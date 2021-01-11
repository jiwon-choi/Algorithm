'''
 # https://programmers.co.kr/learn/courses/30/lessons/17687
'''


def convert(n, num):
    if num == 0:
        return ''
    num, mod = divmod(num, n)
    return convert(n, num) + "0123456789ABCDEF"[mod]


def solution(n, t, m, p):
    stack, num = '0', 0
    while len(stack) < t * m:
        stack += convert(n, num)
        num += 1
    result = [x for i, x in enumerate(stack) if i % m == p - 1]
    return ''.join(result)[:t]
