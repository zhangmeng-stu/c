#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
////д��һ�����������ֵ
//int get_max(int x, int y)
//{
//	return (x > y) ? (x) : (y);
//
//}
//int main()
//{
//	int n = 10;
//	int m = 20;
//	int max = get_max(n, m);
//	printf("max = %d\n", max);
//	return 0;
//
//}

////д��һ���������Խ����������α���
//void Swap1(int x,int y)
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//}
////void Swap2(int *px, int *py)
////{
////	int temp = 0;
////	temp = *px;
////	*px = *py;
////	*py = temp;
////}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	int temp = 0;
//	temp = num1;
//	num1 = num2;
//	num2 = temp;
//	/*Swap1(num1, num2);*/
//	printf("num1  = %d,num2 = %d\n", num1, num2);
//	/*Swap2(&num1, &num2);
//	printf("num1  = %d,num2 = %d\n", num1, num2);*/
//	return 0;
//}

//д��һ��������ÿ�ε�������������ͻὫnum++

//void Add(int *px)
//{
//	*px = *px + 1;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//}

//Ƕ�׵���
//void new_line()
//{
//	printf("hehe\n");
//
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}

//��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���

#include <string.h>
//int main()
//{
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr, "bit"));//strcat����:��src��ָ�ַ�����ӵ�dest��β��(����dest��β����'\0')�����'\0'��
//	printf("%d\n", ret);
//	return 0;
//}

////����һ������ֵ������˳���ӡ����ÿһλ���ݹ飩
//
//
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	system("pause");
//	return 0;
//}

//��д��������������ʱ���������ַ�������
//int Strlen(const char *str)
//{
//	if (*str == '\0')
//		return 0;
//	else return 1 + Strlen(str + 1);
//
//}
//����ʱ����
//int Strlen(const char *str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		*str++;
//	}
//	return count;
//}
//int main()
//{
//	char *p = "abcdef";
//	int len = Strlen(p);
//	printf("%d\n", len);
//	return 0;
//}

//��n�Ľ׳�
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", fib(n));
//	return 0;
//}


