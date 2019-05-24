//指针
#include <stdio.h>
//int fun(int a, int b)
//{
//	int v = a + b;
//	return v; 
//}
//int main()
//{
//	int(*pfun)(int, int);//函数指针
//	pfun = &fun;//pfun指针变量取地址
//	(*pfun)(10, 20);//*pfun得到指向的值，调动执行函数
//	//简化之后，函数名就是整个函数的入口地址
//	pfun = fun;
//	pfun(1, 2);
//
//} 

//字符指针
//1
//int main()
//{
//	char ch = 'w';
//	char *pc = &ch;
//	*pc = 'w';
//	return 0;
//}

////把一个常量字符串的首字符h的地址存放到指针变量pstr中
//int main()
//{
//	char* pstr = "hello bit.";
//	printf("%s\n", pstr);
//	return 0;
//}

////常见的浮点数
//int main()
//{
//	int n = 9;
//	float *pFloat = (float *)&n;
//	printf("n的值为;%d\n", n);
//	printf("*pFloat的值为:%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("n的值为;%d\n", n);
//	printf("*pFloat的值为:%f\n", *pFloat);
//	return 0;
//}

//面试题
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	 
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//}
////用相同的常量字符串去初始化不同的数组的时候就会开辟出不同的内存块，str1与str2不同
////str3、srt4指向同一个空间
//

//一个数组指针的使用
void print_arr1(int arr[3][5], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
}
void print_arr2(int (*arr)[5], int row, int col)//数组指针
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	print_arr1(arr, 3, 5);
	print_arr2(arr, 3, 5);
	return 0;

}