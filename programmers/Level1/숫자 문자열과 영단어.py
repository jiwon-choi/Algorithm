def solution(s):
    num_dict = {
        "zero" : 0,
        "one" : 1,
        "two" : 2,
        "three" : 3,
        "four" : 4,
        "five" : 5,
        "six" : 6,
        "seven" : 7,
        "eight" : 8,
        "nine" : 9
    }
    answer = 0
    key = ''
    for ch in s:
        if ch.isdigit():
            answer = answer * 10 + int(ch)
        else:
            key += ch
        if key in num_dict:
            answer = answer * 10 + num_dict[key]
            key = ''
    return answer

def solution(s):
    num_dict = {
        "zero" : '0',
        "one" : '1',
        "two" : '2',
        "three" : '3',
        "four" : '4',
        "five" : '5',
        "six" : '6',
        "seven" : '7',
        "eight" : '8',
        "nine" : '9'
    }
    answer = s
    for key, value in num_dict.items():
        answer = answer.replace(key, value)
    return int(answer)
    