////1.调整数组使奇数全部都位于偶数前面。题目：
////输入一个整数数组，实现一个函数，
////来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
////所有偶数位于数组的后半部分。
//#include <stdio.h>
//#include <stdlib.h>
//void adjust_arr(int *p, int size)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for(j = 0; j < size; j++)
//	{
//		if ((*p) % 2 == 1)//建立中间变量交换数字位置
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
//2.杨氏矩阵 
//有一个二维数组.数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。时间复杂度小于O(N);
//数组：
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
		printf("找到了\n");
	}
	else
	{
		printf("没找到\n");
	}
	system("pause");
	return 0;
}
