#include <stdio.h>

int minOperations(int* nums, int numsSize)
{
    int ret = 0;
    for(int i = 0; i < numsSize - 1; i++)
    {
		if (nums[i] >= nums[i + 1])
		{   
			ret += nums[i] - nums[i + 1] + 1;
			nums[i + 1] = nums[i] + 1;
		}   
    }   
    return ret;
}

int main(void)
{
	int arr1[] = {1, 5, 2, 4, 1};

	printf("%d\n", minOperations(arr1, 5));

	return 0;
}

/*
1,5,2,4,1
1
1,5,2,4,2
4
1,5,6,4,2
2
1,5,6,6,2
5
1,5,6,6,7
2
1,5,6,6,9
4
1,5,6,6,13



1,5,2,4,1
4
1,5,6,4,1


*/
