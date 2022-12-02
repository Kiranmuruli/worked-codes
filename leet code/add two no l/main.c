#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){}
    int main()
    {
        int numbers[] = [2,7,11,15]

        int target = 16021;

        int *index = twoSum(numbers, sizeof(numbers) / sizeof(numbers[0]), target);

        int i;
        for (i = 0; i < 2; i++)
        {
            printf("index%d = %d ", i + 1, index[i]);
        }
        printf("\n");

        return 0;
    }
