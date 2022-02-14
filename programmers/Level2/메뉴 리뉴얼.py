'''
 https://programmers.co.kr/learn/courses/30/lessons/72411
'''

from itertools import combinations
from collections import Counter

def solution(orders, course):
    answer = []
    for c in course:
        order_list = []
        for order in orders:
            order_list += list(combinations(sorted(order), c))
        cnt = Counter(order_list).most_common()
        for i in range(len(cnt)):
            if cnt[0][1] == 1:
                break
            if cnt[0][1] == cnt[i][1]:
                answer.append(''.join(cnt[i][0]))
            else:
                break
    return sorted(answer)
