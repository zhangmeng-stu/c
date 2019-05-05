//1.递归和非递归分别实现求第n个斐波那契数。 
//#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//int fab(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//
//	int fn1, fn2;
//	fn1 = fn2 = 1;
//	int ret = 0;
//	for (int i = 3; i <= n; i++)
//	{
//		ret = fn1 + fn2;
//		fn2 = fn1;
//		fn1 = ret;
//	}
//	return ret;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", fab(n));
//	return 0;
//}
//
//#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//int fab(int n)
//{
//	if (n < 3)
//	{
//		return 1;
//	}
//	return fab(n - 1) + fab(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", fab(n));
//	return 0;
//}


//2.编写一个函数实现n^k，使用递归实现
//#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//int pow(int n, int k)
//{
//	if (k == 1)
//	{
//		return n;
//	}
//	return n * pow(n, k - 1);
//}
//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//	printf("%d\n", pow(n, k));
//	return 0;
//}
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//int DigitSum(int n)
//{
//	if (n < 9)
//	{
//		return n;
//	}
//	return(n % 10 + DigitSum(n / 10));
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", DigitSum(n));
//	return 0;
//}

//4. 编写一个函数 reverse_string(char * string)（递归实现）
//#include<stdio.h>                           
//#include<stdlib.h>       
//
//void reverse_string(char *string)
//{
//	string++;
//	if (*string != '\0')
//	{
//		reverse_string(string);
//	}
//	string--;
//	printf("%c", *string);
//}
//int main()
//{
//	char *str = "abcde";
//	 reverse_string(str);
//	system("pause");
//	return 0;
//}

//5.递归和非递归分别实现strlen
//#include <stdio.h>
//#include <windows.h>
//int my_strlen(char *string)
//{
//	int count = 0;
//	if (*string != 0)
//	{
//		string++;
//		count = 1 + my_strlen(string);
//	}
//	return count;
//	}
//
//int main()
//{
//	char *string = "abcde";
//	printf("%d\n", my_strlen(string));
//	system("pause");
//	return 0;
//
//}


//#include <stdio.h>
//#include <windows.h>
//int my_strlen(char *string)
//{
//	int count = 0;
//	while (*string++ != 0)
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char *string = "abcde";
//	printf("%d\n", my_strlen(string));
//	system("pause");
//	return 0;
//}
//6.递归和非递归分别实现求n的阶乘
//

//#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//#include <stdlib.h>
//int factor(int n)
//{
//	int ret = 1;//处理0的阶乘和1的阶乘
//	for (int i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", factor(n));
//}

//7.递归方式实现打印一个整数的每一位
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
void fun(int n)
{
	if (n < 9)
	{
		fun(n / 10);
	}
	printf("%d", n % 10);
}
int main()
{
	int n;
	scanf("%d", &n);
	fun(n);
	return 0;
}

