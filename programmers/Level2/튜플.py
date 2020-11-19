'''
 # https://programmers.co.kr/learn/courses/30/lessons/64065
'''


def solution(s):
    answer = []

    _s = s[2:-1]
    split_list = _s.split(',{')
    s_list = []

    for i in range(len(split_list)):
        s_list.append([])
        num_string = ""
        for j in split_list[i]:
            if j.isdigit() is True:
                num_string += j
            else:
                s_list[i].append(int(num_string))
                num_string = ""

    s_list.sort(key=len)    # 길이 순으로 정렬

    for i in range(len(s_list)):
        answer.append(s_list[i][0])
        if i < len(s_list):
            for j in range(i+1, len(s_list)):
                s_list[j].remove(s_list[i][0])

    return answer
