/**
 * https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 */

int maxProfit(int *prices, int pricesSize)
{
    int *profit = (int *)malloc(sizeof(int) * (pricesSize));
    if (pricesSize == 0)
        return 0;

    int min;
    for (int i = 0; i < pricesSize; i++)
    {
        if (i == 0)
        {
            min = prices[i];
            profit[i] = 0;
        }
        else
        {
            if (min > prices[i])
                min = prices[i];
            if (profit[i - 1] < prices[i] - min)
                profit[i] = prices[i] - min;
            else
                profit[i] = profit[i - 1];
        }
    }
    return profit[pricesSize - 1];
}