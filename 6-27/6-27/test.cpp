////1.调整数组使奇数全部都位于偶数前面。
//#include <stdio.h>
//#include <stdlib.h>
//void adjust(int arr[],int len)
//{
//	int swp = 0;
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		while(arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while (arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			swp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = swp;
//			left++;
//			right--;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	adjust(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


////2.杨氏矩阵 
////有一个二维数组.
////数组的每行从左到右是递增的，每列从上到下是递增的.
////在这样的数组中查找一个数字是否存在。
//#include <stdio.h>
//#include <stdlib.h>
//#define ROW 3
//#define COL 3
//int FindNum(int arr[ROW][COL], int row, int col, int k)
//{
//	int left = 0;
//	int right = col - 1;
//	while ((left >= 0) && (right < col))
//	{
//		if (arr[left][right] > k)
//		{
//			right--;
//		}
//		if (arr[left][right] < k)
//		{
//			left++;
//		}
//		if (arr[left][right] == k)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[ROW][COL] = { 1, 2, 3, 2, 3, 4, 3, 4, 5 };
//	int k = 2;
//	int ret = FindNum(arr, ROW, COL, k);
//	if (ret ==1)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}


////1.实现一个函数，可以左旋字符串中的k个字符。 
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void Left(char c[], int k, int len)
//{
//	k = k%len;
//	int j = 0;
//	for (j = 0; j < k; j++)
//	{
//		int i = 0;
//		char twp = c[0];
//		for (i = 0; i < len - 1; i++)
//		{
//			c[i] = c[i + 1];
//		}
//		c[i] = twp;
//	}
//}
//int main()
//{
//	char c[] = "ABCD";
//	int k = 2;
//	int len = strlen(c);
//	printf("左旋前：%s\n", c);
//	Left(c, k, len);
//	printf("左旋后：%s\n", c);
//	return 0;
//}


//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reserve(char*left, char*right)
{
	while(left < right)
	{
		char tmp  = *left;
		*left  = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_reserve(char arr[], int k)
{
	int len  = strlen(arr) - 1;
	char *pstart = &arr[0];
	char *pend = arr + len;
	reserve(pstart, pstart + k - 1);
	reserve(pstart + k, pend);
	reserve(pstart, pend);
}
void right_reserve(char arr[], int k)
{
	int len  = strlen(arr) - 1;
	char *pstart  = &arr[0];
	char *pend  = arr + len;
	reserve(pstart, pstart  + len  - k);
	reserve(pend  - k + 1, pend);
	reserve(pstart, pend);
}
int main()
{
	char arr[10] = "AABCD";
	char arr2[10] = "ABCDA";
	char *p = arr;
    int k=5;
	while(k)
	{
		left_reserve(arr, k);
		if(strcmp(arr, arr2) == 0)
		{
			printf("1\n");
			break;
		}
		right_reserve(p, k);
		if(strcmp(p, arr2) == 0)
		{
			printf("1\n");
			break;
		}
		k--;
	}
	if(0 == k)
	{
		printf("0\n");
	}
	return 0;
}
