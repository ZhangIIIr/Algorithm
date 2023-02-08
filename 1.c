#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	returnSize = NULL;
    for(int i = 0; i < numsSize; i++)
    {
        for(int j = 0; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
				returnSize = (int *)malloc(sizeof(int) * 2);
				returnSize[0] = i;
				returnSize[1] = j;
                break;
            }
        }
        if (returnSize != NULL)
        {
            break;
        }
    }

    return returnSize;
}

int main(void)
{
	int nums[] = {2, 7, 11, 15};
	int numsSize = 4;
	int target = 17;
	int *returnSize = NULL;
	int *ret = NULL;

	ret = twoSum(nums, numsSize, target, returnSize);

	printf("[%d, %d]\n", ret[0], ret[1]);


	free(ret);

	return 0;
}
