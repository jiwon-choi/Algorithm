/**
 * https://leetcode.com/problems/max-increase-to-keep-city-skyline/
 */

int maxIncreaseKeepingSkyline(int **grid, int gridSize, int *gridColSize)
{
    int output = 0, max = 0;
    int TB[gridSize];
    int LR[gridSize];

    for (int i = 0; i < gridSize; i++)
    {
        for (int j = 0; j < gridSize; j++)
        {
            if (max < grid[i][j])
                max = grid[i][j];
        }
        LR[i] = max;
        max = 0;
    }

    for (int j = 0; j < gridSize; j++)
    {
        for (int i = 0; i < gridSize; i++)
        {
            if (max < grid[i][j])
                max = grid[i][j];
        }
        TB[j] = max;
        max = 0;
    }

    for (int i = 0; i < gridSize; i++)
    {
        for (int j = 0; j < gridSize; j++)
        {
            int tmp = (LR[i] < TB[j] ? LR[i] : TB[j]);
            if (grid[i][j] < tmp)
                output += (tmp - grid[i][j]);
        }
    }

    return output;
}
