#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

int my_strlen(const char* str)
{
	assert(str != NULL);
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr1[] = "nizhenbangya";
	int len = my_strlen(arr1);
	printf("%d\n", len);
	return 0;
}