/**
 * https://leetcode.com/problems/running-sum-of-1d-array/
 */

int* runningSum(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;

    int* arr = (int *)malloc(sizeof(int)*numsSize);

    arr[0] = nums[0];
    for(int i=1; i<numsSize; i++){
        arr[i] = arr[i-1] + nums[i];
    }
    
    return arr;
}