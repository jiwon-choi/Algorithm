/**
 * https://www.acmicpc.net/problem/2588
 */

#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int first_result;
    int second_result;
    int third_result;
    int result = a * b;

    first_result = a * (b % 10);
    b /= 10;
    second_result = a * (b % 10);
    b /= 10;
    third_result = a * (b % 10);

    printf("%d\n", first_result);
    printf("%d\n", second_result);
    printf("%d\n", third_result);
    printf("%d\n", result);
}
