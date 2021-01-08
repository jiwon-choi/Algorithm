'''
 # https://programmers.co.kr/learn/courses/30/lessons/17684
'''


def solution(msg):
    answer = []
    dic = [chr(i) for i in range(64, 91)]
    mlist = list(msg)

    while mlist:
        for i in range(1, len(mlist) + 1):
            tmp = ''.join(mlist[:i])
            if tmp not in dic:
                break
            end = i
        else:
            answer.append(dic.index(tmp))
            break

        if len(tmp) == 1:
            answer.append(dic.index(tmp))
        else:
            answer.append(dic.index(tmp[:-1]))
        dic.append(tmp)
        del mlist[:end]

    return answer
