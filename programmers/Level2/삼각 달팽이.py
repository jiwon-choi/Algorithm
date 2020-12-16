'''
 # https://programmers.co.kr/learn/courses/30/lessons/68645
'''


def solution(n):
    answer = []

    arr = [[0 for col in range(n)] for row in range(n)]

    number = 1
    for i in range(n):
        arr[i][0] = number
        number += 1

    scale = y = n-1
    x = 0

    while(scale > 0):
        for i in range(scale):
            if (n+2) % 3 == scale % 3:
                x += 1
            elif (n+1) % 3 == scale % 3:
                x -= 1
                y -= 1
            elif (n) % 3 == scale % 3:
                y += 1
            arr[y][x] = number
            number += 1
        scale -= 1

    for i in range(n):
        for j in range(n):
            if arr[i][j] != 0:
                answer.append(arr[i][j])

    return answer
