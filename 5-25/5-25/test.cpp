//������
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
//	assert(b != 0);//����
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
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			break;
//		case 2:
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			break;
//		case 3:
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			break;
//		case 4:
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			break;
//		case 5:
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//			ret = mod(x, y);
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//
//		printf("ret= %d\n", ret);
//		
//	}
//	
//	return 0;
//}

//ʹ�ú���ָ������ʵ�֣�ת�Ʊ�

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
//	assert(b != 0);//����
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
//	int(*p[])(int x, int y) = { 0, add, sub, mul, div, mod };//ת�Ʊ�
//	while (input)
//	{
//		printf("*******************************\n");
//		printf("******1.add      2.sub   ******\n");
//		printf("******3.mul      4.div   ******\n");
//		printf("******5.mod      0.quit  ******\n");
//		printf("*******************************\n");
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		if ((input <= 5 && input >= 0))
//		{
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//		}
//		else
//		{
//			printf("ѡ�����������ѡ��\n");
//			printf("ret= %d\n", ret);
//		}
//		return 0;
//	}
//}

//�ص�����

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