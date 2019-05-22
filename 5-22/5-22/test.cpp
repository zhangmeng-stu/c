////1、输入密码
//#include  <stdio.h>
//#include <string.h>
//int main()
//{
//	char psw[10] = {};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("please input:");
//		scanf("%s", psw);
//		if (0 == strcmp(psw, "123456"))
//			break;
//		else
//		{
//			printf("密码错误，请重新输入：");
//		}
//	}
//
//	if (i < 3)
//		printf("登录成功\n");
//	else
//		printf("退出程序 \n");
//	return 0;
//}



////2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值
//
//#include "stdio.h"
//
//double Sum()
//{
//	double sum1 = 0, sum2 = 0;
//	int i;
//	for (i = 1; i < 100; i += 2)
//	{
//		sum1 += 1.0 / i;
//	}
//	for (i = 2; i <= 100; i += 2)
//	{
//		sum2 += 1.0 / i;
//	}
//	return sum1 - sum2;
//}
//void printArray(int a[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	printf("%f\n", Sum());
//	return 0;
//}


//3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
#include "stdio.h"
int main()
{
	int i = 0;
	int sum = 0;
	for (i = 1; i < 100; i++)
	{
		if (i / 10 == 9)
		{
			sum++;
		}
		if (i % 10 == 9)
			sum++;
	}
	printf("%d\n", sum);
	return 0;
}