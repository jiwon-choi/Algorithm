'''
 # https://programmers.co.kr/learn/courses/30/lessons/60057
'''


def solution(s):
    answer = len(s)

    for n in range(1, len(s) // 2 + 1):  # 문자열의 절반 사이즈까지 부분 문자열로 사용 가능
        cnt = []
        unit = []
        zip_s = ""

        for i in range(0, len(s), n):  # unit 길이만큼 확인
            if unit and s[i:i+n] == unit[-1]:  # 이전 unit과 현재 unit이 같은 경우
                cnt[-1] += 1
            else:
                cnt.append(1)
                unit.append(s[i:i+n])

        for c, u in zip(cnt, unit):
            if c != 1:
                zip_s += str(c)
            zip_s += u

        if answer > len(zip_s):
            answer = len(zip_s)

    return answer
