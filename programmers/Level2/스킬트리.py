'''
 # https://programmers.co.kr/learn/courses/30/lessons/49993
'''


def solution(skill, skill_trees):
    answer = 0

    new_list = []
    for tree in skill_trees:
        new_str = []
        for i in tree:
            if i in skill:
                new_str.append(i)
        new_str = ''.join(new_str)
        new_list.append(new_str)

    for tree in new_list:
        if not tree:
            answer += 1
        else:
            result = True
            for i in range(len(tree)):
                if tree[i] != skill[i]:
                    result = False
                    break
            if result is True:
                answer += 1
    return answer
