/**
 * https://www.acmicpc.net/problem/7568
 */

#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	int arr[n][2];
	for (int i = 0; i < n; i++)
		scanf("%d %d", &arr[i][0], &arr[i][1]);

	for (int i = 0; i < n; i++)
	{
		int k = 0;
		for (int j = 0; j < n; j++)
		{
			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
				k++;
		}
		printf("%d ", k + 1);
	}
	return 0;
}