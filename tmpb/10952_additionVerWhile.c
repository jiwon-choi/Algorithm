/**
 * https://www.acmicpc.net/problem/10952
 */

#include <stdio.h>

int main() {
    int a, b;

    while(1){
        scanf("%d %d", &a, &b);
        if(a == 0) break;
        else {
            printf("%d\n", a + b);
        }
    }

    return 0;
}
