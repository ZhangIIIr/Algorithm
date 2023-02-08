#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool checkIfPangram(char * sentence){
	int len = strlen(sentence);
	printf("len = %d\n", len);
	if (len < 26)
	{
		return false;
	}

	int arr[26] = {0};
	for (int i = 0; i < len; i++)
	{
		arr[sentence[i] - 'a'] = 1;
	}
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] == 0)
		{
			return false;
		}
	}

	return true;
}

int main(void)
{
	char *str1 = "abcdefghijklmnopqrstuvwxyz";
	printf("%s\n", checkIfPangram(str1) ? "true" : "false");
	char *str2 = "abcdefgiijklmnopqrstuvwxyz";
	printf("%s\n", checkIfPangram(str2) ? "true" : "false");
	char *str3 = "bcdefgiijklmnopqrstuvwxyz";
	printf("%s\n", checkIfPangram(str3) ? "true" : "false");
	char *str4 = "aabcdefgiijklmnopqrstuvwxyz";
	printf("%s\n", checkIfPangram(str4) ? "true" : "false");

	return 0;
}
