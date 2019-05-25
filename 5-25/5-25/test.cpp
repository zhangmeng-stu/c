//计算器
//#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//#include <assert.h>
//
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	assert(b != 0);//断言
//	return a / b;
//}
//int mod(int a, int b)
//{
//	return a % b;
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	while (input)
//	{
//		printf("*******************************\n");
//		printf("******1.add      2.sub   ******\n");
//		printf("******3.mul      4.div   ******\n");
//		printf("******5.mod      0.quit  ******\n");
//		printf("*******************************\n");
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			break;
//		case 2:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			break;
//		case 3:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			break;
//		case 4:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			break;
//		case 5:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = mod(x, y);
//			break;
//		default:
//			printf("选择错误，请重新选择。\n");
//			break;
//		}
//
//		printf("ret= %d\n", ret);
//		
//	}
//	
//	return 0;
//}

//使用函数指针数组实现（转移表）

//
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <assert.h>
//
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	assert(b != 0);//断言
//	return a / b;
//}
//int mod(int a, int b)
//{
//	return a % b;
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int(*p[])(int x, int y) = { 0, add, sub, mul, div, mod };//转移表
//	while (input)
//	{
//		printf("*******************************\n");
//		printf("******1.add      2.sub   ******\n");
//		printf("******3.mul      4.div   ******\n");
//		printf("******5.mod      0.quit  ******\n");
//		printf("*******************************\n");
//		printf("请选择:");
//		scanf("%d", &input);
//		if ((input <= 5 && input >= 0))
//		{
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//		}
//		else
//		{
//			printf("选择错误，请重新选择。\n");
//			printf("ret= %d\n", ret);
//		}
//		return 0;
//	}
//}

//回调函数

int Max(int a, int b)
{
	return a > b ? a : b;
}
int Min(int a, int b)
{
	return a > b ? a : b;
}
typedef int(*pFun)(int, int);
int fun(int a, int b, int(*cmp)(int, int))

{
	int result = cmp(a, b);
	return result;
}

int main()
{
	int ret = fun(10,20,Min);
	printf("%d", ret);
}