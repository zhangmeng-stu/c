#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
////写出一个函数求最大值
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

////写出一个函数可以交换两个整形变量
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

//写出一个函数，每次调用这个函数。就会将num++

//void Add(int *px)
//{
//	*px = *px + 1;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//}

//嵌套调用
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

//把一个函数的返回值作为另一个函数的参数

#include <string.h>
//int main()
//{
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr, "bit"));//strcat函数:把src所指字符串添加到dest结尾处(覆盖dest结尾处的'\0')并添加'\0'。
//	printf("%d\n", ret);
//	return 0;
//}

////接受一个整型值，按照顺序打印它的每一位（递归）
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

//编写函数不允许创建临时变量，求字符串长度
//int Strlen(const char *str)
//{
//	if (*str == '\0')
//		return 0;
//	else return 1 + Strlen(str + 1);
//
//}
//有临时变量
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

//求n的阶乘
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


