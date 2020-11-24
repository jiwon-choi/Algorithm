'''
 # https://programmers.co.kr/learn/courses/30/lessons/67256
'''


def solution(numbers, hand):
    answer = []
    position = {
        1: [0, 0], 2: [0, 1], 3: [0, 2],
        4: [1, 0], 5: [1, 1], 6: [1, 2],
        7: [2, 0], 8: [2, 1], 9: [2, 2], 0: [3, 1]
    }
    now_left = [3, 0]
    now_right = [3, 2]
    for num in numbers:
        if num in [1, 4, 7]:
            answer.append('L')
        elif num in [3, 6, 9]:
            answer.append('R')
        else:
            left = abs(now_left[0] - position[num][0]) + \
                abs(now_left[1] - position[num][1])
            right = abs(now_right[0] - position[num][0]) + \
                abs(now_right[1] - position[num][1])
            if left == right:
                answer.append(hand[0].upper())
            else:
                answer.append('L' if left < right else 'R')
        if answer[-1] == 'L':
            now_left = position[num]
        else:
            now_right = position[num]
    return ''.join(answer)
