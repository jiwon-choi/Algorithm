/**
 * https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
 */

int findNumbers(int* nums, int numsSize){
    int result = 0;
    for(int i=0; i<numsSize; i++){
        int count = 0;
        int tmp = nums[i];
        while(tmp > 0){
            tmp /= 10;
            count++;
        }
        if(count%2 == 0) result++;
    }
    return result;
}
