'''
 # https://programmers.co.kr/learn/courses/30/lessons/12899
'''

def solution(n):
    answer = []
    while(n!=0):
        modulo = n%3
        n //= 3
        if(modulo != 0):
            answer.append(str(modulo))
        else:
            answer.append('4')
            n -= 1
    answer.reverse()
    answer = ''.join(answer)
    return answer