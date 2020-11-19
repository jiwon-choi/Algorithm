/**
 * https://leetcode.com/problems/house-robber/
 */

int rob(int *nums, int numsSize)
{
    int *arr = (int *)malloc(sizeof(int) * (numsSize));
    if (numsSize == 0)
        return 0;
    if (numsSize == 1)
        return nums[0];

    for (int i = 0; i < numsSize; i++)
    {
        if (i == 0 || i == 1)
            arr[i] = nums[i];
        else if (i == 2)
            arr[i] = arr[i - 2] + nums[i];
        else if (arr[i - 2] > arr[i - 3])
            arr[i] = arr[i - 2] + nums[i];
        else
            arr[i] = arr[i - 3] + nums[i];
    }
    if (arr[numsSize - 1] >= arr[numsSize - 2])
        return arr[numsSize - 1];
    else
        return arr[numsSize - 2];
}