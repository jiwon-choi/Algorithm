/**
 * https://www.acmicpc.net/problem/2739
 */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i=1; i<9; i++) {
        printf("2 * %d = %d\n", i, 2*i);
    }
    return 0;
}
