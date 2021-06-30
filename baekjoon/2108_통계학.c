/**
 * https://www.acmicpc.net/problem/2108
 */

#include <stdio.h>
#include <stdlib.h>

int		compare(const void *a, const void *b)
{
	int		num1 = *(int *)a;
	int		num2 = *(int *)b;

	if (num1 < num2)
		return (-1);
	else if (num1 > num2)
		return (1);
	return (0);
}

int		count(int *arr, int n)
{
	int		cnt = 1;
	int		max = 1;
	int		*res = (int *)malloc(sizeof(int) * n);

	for (int i = 1; i < n; i++)
	{
		if (arr[i] == arr[i - 1])
		{
			arr[i - 1] = 0;
			cnt++;
		}
		else
		{
			if (max < cnt)
				max = cnt;
			res[i - 1] = cnt;
			cnt = 1;
		}
	}
	res[n - 1] = cnt;
	if (max < cnt)
		max = cnt;

	int		flag = -1;
	for (int i = 0; i < n; i++)
	{
		if (res[i] == max && flag >= 0)
			return (arr[i]);
		else if (res[i] == max)
			flag = i;
	}
	return (arr[flag]);
}

int		main(void)
{
	int		n;
	scanf("%d", &n);

	int		arr[n];
	double	avg = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		avg += arr[i];
	}
	qsort(arr, n, sizeof(int), compare);

	avg /= n;
	printf("%.0f\n", avg);

	printf("%d\n", arr[n / 2]);

	printf("%d\n", count(arr, n));

	printf("%d\n", arr[n - 1] - arr[0]);
	return (0);
}
