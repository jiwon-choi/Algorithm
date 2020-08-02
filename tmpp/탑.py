'''
 # https://programmers.co.kr/learn/courses/30/lessons/42588
'''

def solution(heights):
    answer = []
    for i in reversed(range(len(heights))):
        find = False
        for j in reversed(range(i)):
            if(heights[i] < heights[j]):
                answer.insert(0, j+1)
                find = True
                break
        if find is False:
            answer.insert(0, 0)
    return answer