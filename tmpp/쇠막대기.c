/**
 * https://programmers.co.kr/learn/courses/30/lessons/42585
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* arrangement) {
    int answer = 1;
    int k = 1;

    for(unsigned long i=1; i<strlen(arrangement); i++){
        if(arrangement[i] == '('){
            k++; answer++;
        }
        else if(arrangement[i] == ')'){
            if(arrangement[i-1] == '('){
                k--; answer--;
                answer += k;
            }
            else if(arrangement[i-1] == ')') k--;
        }
    }
    return answer;
}