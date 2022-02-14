'''
 # https://programmers.co.kr/learn/courses/30/lessons/17681
'''


def solution(n, arr1, arr2):
    answer = []
    for i, num in enumerate(arr1):
        answer.append([])
        for _ in range(n):
            num, mod = divmod(num, 2)
            answer[i].append(mod)
        answer[i].reverse()

    for i, num in enumerate(arr2):
        for j in range(n):
            num, mod = divmod(num, 2)
            answer[i][n-j-1] += mod
            if answer[i][n-j-1] > 0:
                answer[i][n-j-1] = '#'
            else:
                answer[i][n-j-1] = ' '

    result = []
    for i in answer:
        result.append(''.join(i))
    return result
