#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	for (i = 0; i < pow(10,6); i++)  //�������߳������н��һʱ��ʾ������ȫ��������
		                             //�����ӡһ�������ڵĽ�� 
	{
		//�ж�i�Ƿ�Ϊ ������
		//1.����i��λ��n
		int tmp = i;                 //��ʱ����tmp����i������ı�ѭ��֮��i++�ж���һ����
		int n = 1;
		while (tmp /= 10)
		{
			n++;
		}
		//2.����i��ÿһλ��n�η�֮��sum
		int sum = 0;                  //ͬ��
		tmp = i;
		while (tmp)
		{
			sum += (int)pow(tmp % 10, n);
			tmp /= 10;
		}
		//3.�Ƚ� i == sum
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}

	