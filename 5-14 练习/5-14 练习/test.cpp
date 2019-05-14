//1.编写函数： unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//如：在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：2550136832

//
//#define CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	int ret = 0;
//	int bit = 0;
//	for (i = 0; i < 32; i++)
//	{
//		ret <<= 1;//左移
//		bit = value & 1;
//		value >>= 1;
//		ret = ret | bit;
//
//	}
//	return ret;
//}
//int main()
//{
//	int value = 25;
//	unsigned int ret = reverse_bit(value);
//	printf("%u", ret);
//	system("pause");
//	return 0;
//
//}




//2.不使用（a+b）/2这种方式，求两个数的平均值。
//#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ave = a - (a - b) / 2;
//// int ave = (a & b)+((a^b)/2);
//	printf("%d", ave);
//	return 0;
//}


//3.编程实现：一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。请找出这个数字。（使用位运算）
//
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
//	int i;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < size; i++)
//	{
//		 arr[0] = arr[0] ^ arr[i];
//	}
//	printf("%d", arr[0]);
//	return 0;
//}

//#include <arrert.h>
//char * strcpy(char * dst, const char * src)
//{
//	char * cp = dst;
//	assert(dst && src);
//	while (*cp++ = *src++)
//		;
//	return (dst);
//}

//有一个字符数组的内容为:"student a am i",
//请你将数组的内容改为"i am a student".
//要求：不能使用库函数。只能开辟有限个空间（空间个数和字符串的长度无关）。


#include <stdio.h>
#include <string.h>
void reservestring(char a[], int x, int y)
{
	x = x - 1;
	while (x >= y)
	{
		char tmp = a[x];
		a[x] = a[y];
		a[y] = tmp;
		x--;
		y++;
	}
}
void reserve(char a[], int num)
{
	int x = 0;
	int y = 0;
	num = num + 1;
	while (num--)
	{
		if (a[x] == ' ' || a[x] == '\0')
		{
			reservestring(a, x, y);
			y = x + 1;
			x = y;
		}
		else
		{
			x++;
		}
	}
	reservestring(a, strlen(a), 0);
}
int main()
{
	char a[] = "student a am i";
	reserve(a, strlen(a));
	printf("%s", a);
	return 0;
}
