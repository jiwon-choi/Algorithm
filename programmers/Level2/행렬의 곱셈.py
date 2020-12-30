'''
 # https://programmers.co.kr/learn/courses/30/lessons/12949
'''


def solution(arr1, arr2):
    answer = []
    for i in range(len(arr1)):
        answer.append([])
        for j in range(len(arr2[0])):
            list1 = arr1[i]
            list2 = [z[j] for z in arr2]
            res = sum([a * b for a, b in zip(list1, list2)])
            answer[i].append(res)
    return answer
