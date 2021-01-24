#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//#include <string.h>
 void my_strcpy(char *dest  , const char* str)
{
	 assert(dest != NULL);
	 assert(str != NULL);
	 while (*dest++ = *str++)
	 {
		 ;
	 }

}

int main()
{
	char arr1[100] = "";
	char arr2[] = "ÄãÕæ°ôÑ½¹þ¹þ¹þ¹þ¹þ";
	 my_strcpy(arr1,arr2);
	 printf("%s\n", arr1);
	// printf("%d\n",sizeof(arr2));
	return 0;
}