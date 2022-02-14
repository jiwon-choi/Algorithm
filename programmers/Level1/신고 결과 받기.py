'''
 https://programmers.co.kr/learn/courses/30/lessons/92334
'''

def solution(id_list, report, k):
    answer = {x : 0 for x in id_list}
    reports = {x : 0 for x in id_list}

    for r in set(report):
        reports[r.split(' ')[1]] += 1

    for r in set(report):
        if reports[r.split(' ')[1]] >= k:
            answer[r.split(' ')[0]] += 1

    return list(answer.values())
