/**
 * https://www.acmicpc.net/problem/9095
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
  int caseNumber;
  scanf("%d", &caseNumber);

  for (int i = 0; i < caseNumber; i++){
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(sizeof(int) * (n + 1));
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;

    for (int j = 3; j <= n; j++)
      arr[j] = arr[j - 1] + arr[j - 2] + arr[j - 3];

    printf("%d\n", arr[n]);
  }

  return 0;
}
