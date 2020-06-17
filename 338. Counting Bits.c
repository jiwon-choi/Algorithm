/**
 * https://leetcode.com/problems/counting-bits/
 */

int* countBits(int num, int* returnSize){
    int* B = (int *)malloc(sizeof(int)*(num+1));
    *returnSize = num+1;
    for(int i=0; i<=num; i++)
        if(!i) B[i]=0;
        else if(!(i%2)) B[i]=B[(i>>1)];
        else B[i]=B[(i>>1)]+1;
            
    return B;
}