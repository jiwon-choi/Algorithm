'''
 # https://programmers.co.kr/learn/courses/30/lessons/42583
'''


def solution(bridge_length, weight, truck_weights):
    answer = 0
    queue = [0 for _ in range(bridge_length)]
    while truck_weights:
        answer += 1
        queue.pop(0)
        if sum(queue) + truck_weights[0] <= weight:
            queue.append(truck_weights.pop(0))
        else:
            queue.append(0)
    return answer + bridge_length
