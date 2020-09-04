/**
 * https://programmers.co.kr/learn/courses/30/lessons/12953
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int solution(int arr[], size_t arr_len) {
    int answer = 1;
    int count[101] = { 0, };
    
    for(int i=0; i<arr_len; i++) {
        int myCount[101] = { 0, };
        int operand = arr[i];
        while(operand != 1) {
            for(int j=2; j<=operand; j++) {
                if(operand%j == 0) {
                    myCount[j]++;
                    operand /= j;
                    break;
                }
            }
        }
        for(int j=2; j<=101; j++){
            count[j] = myCount[j] > count[j] ? myCount[j] : count[j];
        }
    }
    for(int i=2; i<101; i++){
        for(int j=0; j<count[i]; j++){
            answer *= i;
        }
    }
    return answer;
}