'''
 # https://programmers.co.kr/learn/courses/30/lessons/17677
'''


def solution(str1, str2):
    set1, set2 = [], []
    str1, str2 = str1.lower(), str2.lower()
    for i in range(1, len(str1)):
        if str1[i - 1].isalpha() and str1[i].isalpha():
            set1.append(str1[i - 1] + str1[i])
    for i in range(1, len(str2)):
        if str2[i - 1].isalpha() and str2[i].isalpha():
            set2.append(str2[i - 1] + str2[i])

    if not set1 and not set2:
        return 65536

    inter, union = 0, 0
    for x in set1:
        union += 1
        if x in set2:
            inter += 1
            set2.remove(x)
    union += len(set2)
    return int(inter / union * 65536)


def solution2(str1, str2):
    set1 = [str1[i: i+2].lower()
            for i in range(len(str1) - 1) if str1[i: i+2].isalpha()]
    set2 = [str2[i: i+2].lower()
            for i in range(len(str2) - 1) if str2[i: i+2].isalpha()]

    if not set1 and not set2:
        return 65536

    inter, union = 0, 0
    for x in set1:
        union += 1
        if x in set2:
            inter += 1
            set2.remove(x)
    union += len(set2)
    return int(inter / union * 65536)
