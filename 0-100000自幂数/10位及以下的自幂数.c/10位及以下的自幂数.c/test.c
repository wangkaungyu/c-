#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	for (i = 0; i < pow(10,6); i++)  //次数过高程序运行结果一时显示不出完全的自幂数
		                             //这里打印一百万以内的结果 
	{
		//判断i是否为 自幂数
		//1.计算i的位数n
		int tmp = i;                 //临时变量tmp这样i本身不会改变循环之后i++判断下一个数
		int n = 1;
		while (tmp /= 10)
		{
			n++;
		}
		//2.计算i的每一位的n次方之和sum
		int sum = 0;                  //同上
		tmp = i;
		while (tmp)
		{
			sum += (int)pow(tmp % 10, n);
			tmp /= 10;
		}
		//3.比较 i == sum
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}

	