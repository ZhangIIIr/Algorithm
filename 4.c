#include <stdio.h>
#include <stdlib.h>


double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
	int len = nums1Size + nums2Size;
	double ret = 0;
	int *nums3 = (int *)malloc(sizeof(int) * len);
	int tmp = 0;

	puts("");
	for (int a = 0; a < nums1Size; a++)
	{
		printf("%d ", nums1[a]);
	}
	puts("");
	for (int a = 0; a < nums2Size; a++)
	{
		printf("%d ", nums2[a]);
	}
	puts("");

	int k = 0;
	for (int i = 0; i < len; i++)
	{
		
	}
	for (int a = 0; a < len; a++)
	{
		printf("%d ", nums3[a]);
	}
	puts("");
	for (int i = 0; i < (k - 1); i++)
	{
		for (int j = i + 1; j < k; j++)
		{
			if (nums3[i] > nums3[j])
			{
				tmp = nums3[i];
				nums3[i] = nums3[j];
				nums3[j] = tmp;
			}
		}
	}
	for (int a = 0; a < len; a++)
	{
		printf("%d ", nums3[a]);
	}

	printf("k = %d\n", k);
	if (k % 2 == 0)
	{
		ret = (double)(nums3[k / 2] + nums3[k / 2 - 1]) / 2;
		printf("nums3[k / 2] = %d, nums3[k / 2 - 1] = %d\n", nums3[k / 2], nums3[k / 2 - 1]);
	}
	else
	{
		ret = (double)nums3[(k - 1) / 2];
	}

	free(nums3);
	return ret;
}

int main(void)
{
	int nums1[3] = {0, 1, 3};
	int nums2[4] = {4, 5, 6, 7};
	printf("%f\n", findMedianSortedArrays(nums1, 3, nums2, 4));
	int nums3[2] = {1, 3};
	int nums4[1] = {2};
	printf("%f\n", findMedianSortedArrays(nums3, 2, nums4, 1));
	int nums5[2] = {1, 2};
	int nums6[2] = {-1, 3};
	printf("%f\n", findMedianSortedArrays(nums5, 2, nums6, 2));
	int nums7[2] = {1, 3};
	int nums8[3] = {2, 3, 4};
	printf("%f\n", findMedianSortedArrays(nums7, 2, nums8, 3));
	int nums9[] = {1,1,1,1,1,1,1,1,1,1,4,4};
	int nums10[] = {1,3,4,4,4,4,4,4,4,4,4};
	printf("%f\n", findMedianSortedArrays(nums9, 12, nums10, 11));

	return 0;
}
