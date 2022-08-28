//https://leetcode.com/problems/running-sum-of-1d-array/

#include <stdio.h>

int main()
{
    
    int nums[] = {3, 1, 2, 10, 1};
    int numSize = sizeof nums / sizeof nums[0];
    int returnSize, i;

    for (i = 0; i<numSize; i++){
        returnSize += nums[i];
        printf("%d ",  returnSize);
    }
    
    return 0;
}
