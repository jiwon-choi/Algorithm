/**
 * https://www.acmicpc.net/problem/10952
 */

#include <stdio.h>

int main() {
    int a, b;

    while(scanf("%d", &a) != EOF){
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}
