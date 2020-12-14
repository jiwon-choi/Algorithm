'''
 # https://programmers.co.kr/learn/courses/30/lessons/42587
'''


def solution(priorities, location):
    pri_list = [(i, x) for i, x in enumerate(priorities)]
    queue = []

    while pri_list:
        pop = pri_list.pop(0)
        x_list = [x for i, x in pri_list]
        if pri_list:
            max_v = max(x_list)

        if pop[1] >= max_v:
            queue.append(pop)
        else:
            pri_list.append(pop)

    for i in queue:
        if i[0] == location:
            return queue.index(i) + 1
