//1.��ӡ����
//#include "stdio.h"
//int main()
//{
//	int maxline;
//	scanf("%d", &maxline);
//	for (int i = 1; i <= maxline; i++)
//	{
//		for (int j = 1; j <= maxline - i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 1; i <= maxline; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 1; j <= 2 * (maxline - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//2.���0��999֮������С�ˮ�ɻ����������
//#include "stdio.h"
//#include "math.h"
//void nPowerNumber()
//{
//	int i;
//	for (i = 100; i < 1000; i++)
//	{
//
//		int tmp = i;
//		int Sum = 0;
//
//		while (tmp)
//		{
//			int num = tmp % 10;
//			Sum += pow(num, 3);//sum = num *num *num
//			tmp /= 10;
//		}
//
//		if (Sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//}
//
//
//int main()
//{
//	nPowerNumber();
//	return 0;
//}


//3.��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
#include "stdio.h"
#include "math.h"
void nPowerNumber()
{
	int i;
	for (i = 100; i < 1000; i++)
	{

		int tmp = i;
		int Sum = 0;

		while (tmp)
		{
			int num = tmp % 10;
			Sum += pow(num, 3);//sum = num *num *num
			tmp /= 10;
		}

		if (Sum == i)
		{
			printf("%d\n", i);
		}
	}
}


int main()
{
	nPowerNumber();
	return 0;
}