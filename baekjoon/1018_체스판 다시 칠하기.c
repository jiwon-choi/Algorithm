/**
 * https://www.acmicpc.net/problem/7568
 */

#include <stdio.h>

int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);

	char arr[n][m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf(" %c", &arr[i][j]);

	int min = 65;
	for (int i = 0; i < n - 7; i++)
	{
		for (int j = 0; j < m - 7; j++)
		{
			int Wstart_cnt = 0;
			int Bstart_cnt = 0;
			for (int x = i; x < 8 + i; x++)
			{
				for (int y = j; y < 8 + j; y++)
				{
					if ((x + y) % 2 == 0)
					{
						if (arr[x][y] == 'B')
							Wstart_cnt++;
						else
							Bstart_cnt++;
					}
					else
					{
						if (arr[x][y] == 'W')
							Wstart_cnt++;
						else
							Bstart_cnt++;
					}
				}
			}
			min = min < Bstart_cnt ? min : Bstart_cnt;
			min = min < Wstart_cnt ? min : Wstart_cnt;
		}
	}
	printf("%d", min);
}