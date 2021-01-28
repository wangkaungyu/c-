#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
                         //此代码缺点             1.现在只能给定长度宽度还不能实现输入
					     	//                    2.打印的结果不是平面左右对称三角而是 // *
																					    //**
																						//***
																						//****
																						//*****
int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			if (i == j)
			{
				arr[i][j] = 1;
			}
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	//打印
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%-3d ", arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}