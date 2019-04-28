//1.打印乘法口诀
//#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//int main()
//{
//	int m;
//	int i, j;
//	scanf("%d", &m);
//	for (i = 1; i < m; i++)
//	{
//		for (j = 1; j < m; j++)
//			printf("%d *%d = %d ", i, j, i*j);
//		printf("\n");
//	}
//	
//	return 0;
//}


//2.使用函数实现两个数的交换。
//#include <stdio.h>
//#include<stdlib.h>
//void swap(int *a, int *b)
//{
//	int count;
//	count = *a;
//	*a = *b;
//	*b = count;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d  %d", a, b);
//	swap(&a,&b);
//	printf("%d  %d", a, b);
//	system("pause");
//	return 0;
//}


//3.实现一个函数判断year是不是润年。
//#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//
//int leap(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (leap(year))
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	system("pause");
//	return 0;
//}

//4.创建一个数组，
//#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//
//void init(int array[], int sz, int value)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//		array[i] = value;
//}
//void empty(int array[], int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//		array[i] = 0;
//}
// void swap(int *a, int *b)
//{
//	int count;
//	count = *a;
//	*a = *b;
//	*b = count;
//}
//void reverse(int array[], int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		swap(&array[i], &array[sz - i - 1]);
//	}
//}
//void printArray(int array[],int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//		printf("%d", array[i]);
//	printf("\n");
//}
//
//#define N 10
//void intputArray(int array[], int sz)
//{
//	int i;
//	printf("请输入%d个数\n", sz);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &array[i]);
//	}
//}
//int main()
//{
//	int array[N];
//	
//	intputArray(array, N);
//	printArray(array, N);
//	reverse(array, N);
//	init(array, N,100);
//	printArray(array, N);
//	empty(array, N);
//	return 0;
//}



//5.实现一个函数，判断一个数是不是素数。
//#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//
//int judge(int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		if (i%n == 0)
//		{
//			return 0;
//		}
//		else if (i == n)
//		{
//			return 1;
//		}
//	}
//}
//int main()
//{
//	int n =0;
//	printf("请输入一个数：");
//	scanf("%d", &n);
//	if (judge(n))
//	{
//		printf("是素数");
//	}
//	else
//	{
//		printf("不是素数");
//	}
//
//	return 0;
//}



