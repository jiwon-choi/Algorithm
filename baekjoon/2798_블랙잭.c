/**
 * https://www.acmicpc.net/problem/2231
 */

#include <stdio.h>

int	main(void)
{
	int	n, m;
	scanf("%d %d", &n, &m);

	int card[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &card[i]);

	int max = 0;
	for (int a = 0; a < n - 2; a++)
	{
		for (int b = a + 1; b < n - 1; b++)
		{
			for (int c = b + 1; c < n; c++)
			{
				int tmp = card[a] + card[b] + card[c];
				if (max < tmp && tmp <= m)
					max = tmp;
			}
		}
	}
	printf("%d\n", max);
	return 0;
}