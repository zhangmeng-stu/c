#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
//������ʹ��
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("��������������:>");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}




//�����ʹ��
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

//���ξֲ�����static�ı��������ڣ��ı�������
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

//����ȫ�ֱ���static
//static int g_val = 2018;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}



//���κ��� static
//static int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("%d\n", Add(2, 3));
//}

//define���峣���ͺ�
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


//ָ��
//int main()
//{
//	int num = 10;
//	&num;//ȡ��num��ֵ
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int *p = &num;//*pָ���������ŵ�ַ
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

//ָ������Ĵ�С
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