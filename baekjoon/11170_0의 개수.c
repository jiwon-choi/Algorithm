/**
 * https://www.acmicpc.net/problem/11170
 */

#include <stdio.h>

int	division(int n)
{
	int	cnt = 0;

	if (n == 0)
		return (1);
	while (n != 0)
	{
		if (n % 10 == 0)
			cnt++;
		n /= 10;
	}
	return (cnt);
}

int	main(void)
{
	int	t;

	scanf("%d", &t);
	int	arr[t][2];
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &arr[i][0]);
		scanf("%d", &arr[i][1]);
	}
	for (int i = 0; i < t; i++)
	{
		int	cnt = 0;
		for (int j = arr[i][0]; j <= arr[i][1]; j++)
			cnt += division(j);
		printf("%d\n", cnt);
	}
	return (0);
}