////1.��������ʹ����ȫ����λ��ż��ǰ�档��Ŀ��
////����һ���������飬ʵ��һ��������
////�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
////����ż��λ������ĺ�벿�֡�
//#include <stdio.h>
//#include <stdlib.h>
//void adjust_arr(int *p, int size)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for(j = 0; j < size; j++)
//	{
//		if ((*p) % 2 == 1)//�����м������������λ��
//		{
//		temp = *p;
//		*p = *(p - j + i);
//		*(p - j + i) = temp;
//		i++;
//	}
//		*p++;
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	adjust_arr(arr, size);
//	for (i = 0; i < size; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//2.���Ͼ��� 
//��һ����ά����.�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�ʱ�临�Ӷ�С��O(N);
//���飺
//1 2 3
//2 3 4
//3 4 5
#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 3
int FindNum(int arr[ROW][COL], int row, int col, int k)
{
	int left = 0;
	int right = COL - 1;
	while ((left >= 0) && (right <= col))
	{
		if (arr[ROW][COL] > k)
		{
			col--;
		}
		if (arr[ROW][COL] < k)
		{
			left++;
		}
		if (arr[ROW][COL] == k)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[ROW][COL] = { 1, 2, 3, 2, 3, 4, 3, 4, 5 };
	int k = 6;
	int ret = FindNum(arr, ROW, COL, k);
	if (ret == 1)
	{
		printf("�ҵ���\n");
	}
	else
	{
		printf("û�ҵ�\n");
	}
	system("pause");
	return 0;
}
