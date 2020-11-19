'''
 # https://programmers.co.kr/learn/courses/30/lessons/42885
'''


def solution(people, limit):
    answer = 0
    people.sort()
    start = 0
    end = -1

    while True:
        if(start-end > len(people)):
            break
        elif(start == end):
            answer += 1
        elif(people[start] + people[end] <= limit):
            answer += 1
            start += 1
            end -= 1
        else:
            answer += 1
            end -= 1
    return answer
