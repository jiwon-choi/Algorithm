'''
 https://programmers.co.kr/learn/courses/30/lessons/86051
'''

def solution(numbers):
    answer = 0
    for i in range(0, 10):
        if i not in numbers:
            answer += i
    return answer
