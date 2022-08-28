/* Online C Compiler and Editor */
#include <stdio.h>

int main()
{
    
    int nums[] = {1, 2, 3, 4};
    int numSize = sizeof nums / sizeof nums[0];
    int returnSize, i;

    for (i = 0; i<numSize; i++){
         returnSize = nums[i] + nums[i-1];
        printf("%d ",  returnSize);
    }
    
    return 0;
}
