'''
 # https://programmers.co.kr/learn/courses/30/lessons/17682
'''


def solution(dartResult):
    answer = 0
    arr = []
    num = 0
    for i in dartResult:
        if i.isdigit():
            num = num * 10 + int(i)
        elif i.isalpha():
            arr.append([num])
            num = 0
            if i == 'S':
                arr[-1].append(1)
            elif i == 'D':
                arr[-1].append(2)
            else:
                arr[-1].append(3)
            arr[-1].append(1)
        elif i == '*':
            arr[-1][-1] *= 2
            if len(arr) > 1:
                arr[-2][-1] *= 2
        else:
            arr[-1][-1] *= -1
    for element in arr:
        answer += element[0] ** element[1] * element[2]
    return answer
