'''
 # https://programmers.co.kr/learn/courses/30/lessons/12953
'''

from math import gcd


def lcm(x, y):
    return x * y // gcd(x, y)


def solution(arr):
    while len(arr) > 1:
        arr.append(lcm(arr.pop(), arr.pop()))
    return arr[0]
