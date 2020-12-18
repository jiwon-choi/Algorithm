'''
 # https://programmers.co.kr/learn/courses/30/lessons/42839
'''


from itertools import permutations


def solution(numbers):
    per = []
    for i in range(1, len(numbers) + 1):
        per.extend(list(map(''.join, permutations(numbers, i))))
    nums = []
    for num in per:
        flag = False
        for i in range(2, int(num) - 1):
            if int(num) % i == 0:
                flag = True
                break
        if flag is False and int(num) not in nums and int(num) > 1:
            nums.append(int(num))
    return len(nums)
