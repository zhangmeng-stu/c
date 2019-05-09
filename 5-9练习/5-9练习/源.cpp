////1.写一个函数返回参数二进制中 1 的个数 
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while (value != 0)
//	{
//		if ((value & 1) == 1)//按位与
//		{
//			count++;
//		}
//		value = value >> 1;//右移一位
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int count = count_one_bits(num);
//	printf("二进制中1的个数:%d", count);
//	system("pause");
//	return 0;
//}
//
//2.获取一个数二进制序列中所有的偶数位和奇数位， 分别输出二进制序列。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	int num = 0;
//	int temp;
//	scanf("%d", &num);
//	printf("偶数位有：");
//	for (i = 31; i >= 0; i = i - 2)
//	{
//		temp = (num >> i) & 1;
//		printf("%d", temp);
//	}
//	printf("\n");
//	printf("奇数位有：");
//	for (i = 30; i >= 0; i = i - 2)
//	{
//		temp = (num >> i) & 1;
//		printf("%d", temp);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
////3. 输出一个整数的每一位。 
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void fun(int n)
//{
//	if (n > 9)
//		fun(n / 10);
//		printf("%d", n % 10);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	fun(n);
//	return 0;
//}

//4.编程实现： 两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int count_diffrent_bits(int x, int y)
{
	int i = 0;
	int tmp = x ^ y;
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}
int main()
{
	int m = 0;
	int n = 0;
	printf("请输入两个整数m,n：\n");
	scanf("%d\n%d", &m, &n);
	int ret = count_diffrent_bits(m, n);
	printf("两个整数%d,%d有%d位不同\n", m, n, ret);
	return 0;
}
