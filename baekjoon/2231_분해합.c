/**
 * https://www.acmicpc.net/problem/2231
 */

#include <stdio.h>

int div(int input)
{
	if (input == 0)
		return (0);
	return (input % 10 + div(input / 10));
}

int main(void)
{
	int n;
	int result = 0;

	scanf("%d", &n);
	for (int i = 0; i <= n; i++)
	{
		if (div(i) + i == n)
		{
			result = i;
			break;
		}
	}
	printf("%d\n", result);
	return 0;
}
