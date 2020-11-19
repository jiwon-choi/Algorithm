/**
 * https://leetcode.com/problems/shuffle-the-array/
 */

int *shuffle(int *nums, int numsSize, int n, int *returnSize)
{

    *returnSize = numsSize;
    int *arr = (int *)malloc(sizeof(int) * numsSize);
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        arr[index++] = nums[i];
        arr[index++] = nums[i + n];
    }

    return arr;
}