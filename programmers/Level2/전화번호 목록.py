'''
 # https://programmers.co.kr/learn/courses/30/lessons/42577
'''


def solution(phone_book):
    for i in range(0, len(phone_book)):
        for j in range(0, len(phone_book)):
            if i == j:
                continue
            if phone_book[j] == phone_book[i][:len(phone_book[j])]:
                return False
    return True
