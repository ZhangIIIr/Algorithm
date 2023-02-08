#include <stdio.h>
#include <string.h>

int is_repeat(char * s, int a, int b)
{
	for (int i = a; i <= b; i++)
	{
		for (int j = i; j <= b; j++)
		{
			if (s[i] == s[j] && i < j)
			{
				printf("is_repeat(): i = %d, j = %d\n", i, j);
				return j - i;
			}
		}
	}
	return 0;
}

int lengthOfLongestSubstring(char * s)
{
	int i = 0;
	int j = 0;
	int ret = 0;
	int max = 0;
	int len = strlen(s);

	while (j < len && i < len)
	{
        printf("haha: i = %d, j = %d\n", i, j);
		ret = is_repeat(s, i, j);
        if (ret > 0)
		{
			i++;
            max = (max < ret) ? ret : max;
		}
        else
        {
            max = j - i + 1;
        }
        printf("ret = %d, max = %d\n", ret, max);
        if (j < len)
        {
            j++;
        }
	}

	return max;
}

int main(void)
{
	char *s1 = "aacabcdd";

	printf("s1 = %s\n", s1);
	printf("lengthOfLongestSubstring = %d\n", lengthOfLongestSubstring(s1));

	return 0;
}
