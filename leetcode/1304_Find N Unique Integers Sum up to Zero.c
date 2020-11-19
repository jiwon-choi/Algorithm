/**
 * https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/
 */

int *sumZero(int n, int *returnSize)
{
    int *arr = (int *)malloc(sizeof(int) * n);
    *returnSize = n;

    int index = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        arr[index++] = i;
        arr[index++] = (-1) * i;
    }
    if (n % 2 == 1)
        arr[index] = 0;

    return arr;
}
