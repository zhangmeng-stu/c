////1.дһ���������ز����������� 1 �ĸ��� 
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while (value != 0)
//	{
//		if ((value & 1) == 1)//��λ��
//		{
//			count++;
//		}
//		value = value >> 1;//����һλ
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int count = count_one_bits(num);
//	printf("��������1�ĸ���:%d", count);
//	system("pause");
//	return 0;
//}
//
//2.��ȡһ�������������������е�ż��λ������λ�� �ֱ�������������С�
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	int num = 0;
//	int temp;
//	scanf("%d", &num);
//	printf("ż��λ�У�");
//	for (i = 31; i >= 0; i = i - 2)
//	{
//		temp = (num >> i) & 1;
//		printf("%d", temp);
//	}
//	printf("\n");
//	printf("����λ�У�");
//	for (i = 30; i >= 0; i = i - 2)
//	{
//		temp = (num >> i) & 1;
//		printf("%d", temp);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
////3. ���һ��������ÿһλ�� 
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

//4.���ʵ�֣� ����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
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
	printf("��������������m,n��\n");
	scanf("%d\n%d", &m, &n);
	int ret = count_diffrent_bits(m, n);
	printf("��������%d,%d��%dλ��ͬ\n", m, n, ret);
	return 0;
}
