'''
 https://programmers.co.kr/learn/courses/30/lessons/72410
'''

def solution(new_id):
    answer = ''

    # 1
    new_id = new_id.lower()

    # 2
    for ch in new_id:
        if not ch.isalnum() and ch not in ['-', '_', '.']:
            new_id = new_id.replace(ch, '')

    # 3
    for ch in new_id:
        if answer and answer[-1] == '.' and ch == '.':
            continue
        answer += ch
    
    # 4
    if answer[0] == '.':
        answer = answer[1:]
    if answer and answer[-1] == '.':
        answer = answer[:-1]
    
    # 5
    if not answer:
        answer = 'a'

    # 6
    if len(answer) >= 16:
        answer = answer[:15]
    if answer and answer[-1] == '.':
        answer = answer[:-1]
    
    # 7
    while len(answer) <= 2:
        answer += answer[-1]
    return answer
