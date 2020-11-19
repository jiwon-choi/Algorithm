/**
 * https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
 */
bool *kidsWithCandies(int *candies, int candiesSize, int extraCandies, int *returnSize)
{
    *returnSize = candiesSize;
    bool *arr = (bool *)malloc(sizeof(bool) * candiesSize);

    int maxCandies = 0;
    for (int i = 0; i < candiesSize; i++)
        maxCandies = candies[i] > maxCandies ? candies[i] : maxCandies;
    for (int i = 0; i < candiesSize; i++)
    {
        if (candies[i] + extraCandies >= maxCandies)
            arr[i] = true;
        else
            arr[i] = false;
    }

    return arr;
}