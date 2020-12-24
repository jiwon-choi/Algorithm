'''
 # https://programmers.co.kr/learn/courses/30/lessons/1845
'''


def solution(nums):
    answer = []
    for n in nums:
        if n not in answer:
            answer.append(n)
    return min(len(nums)//2, len(answer))
