/**
 * https://www.acmicpc.net/problem/2750
 */

#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	int arr[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
			if (arr[j] < arr[min])
				min = j;
		int tmp = arr[min];
		arr[min] = arr[i];
		arr[i] = tmp;
	}

	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);

	return (0);
}