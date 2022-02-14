'''
 # https://programmers.co.kr/learn/courses/30/lessons/17686
'''


import re


def solution(files):
    parse = []
    for file in files:
        num = re.findall('\d+', file)[0]
        head = file.split(num, 1)[0]
        tail = file.split(num, 1)[1]
        parse.append((head, num, tail))
    parse = sorted(parse, key=lambda x: (x[0].lower(), int(x[1])))
    answer = []
    for p in parse:
        answer.append(''.join(p))
    return answer
