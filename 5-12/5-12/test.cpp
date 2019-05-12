#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
//变量的使用
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("输入两个操作数:>");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}




//数组的使用
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//修饰局部变量static改变生命周期，改变作用域
//void test()
//{
//	static int i = 0;
//	i++;
//	printf("%d", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//修饰全局变量static
//static int g_val = 2018;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}



//修饰函数 static
//static int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("%d\n", Add(2, 3));
//}

//define定义常量和宏
//#define MAX 1000
//#define  ADD(x,y) (x + y)
//int main()
//{
//	int sum = ADD(2, 3);
//	printf("sum = %d", sum);
//	sum = 10 * ADD(2, 3);
//	printf("sum = %d", sum);
//	return 0;
//}


//指针
//int main()
//{
//	int num = 10;
//	&num;//取出num的值
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int *p = &num;//*p指针变量，存放地址
//	*p = 20;
//	return 0;
//}
//
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	return 0;
//}

//指针变量的大小
//int main()
//{
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(short *));
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(double *));
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
		{
			printf("hehe\n");
		}
	}
	else
	{
		printf("haha\n");
	}
	return 0;
}