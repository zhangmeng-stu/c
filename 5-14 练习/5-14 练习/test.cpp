//1.��д������ unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//�磺��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�2550136832

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
//		ret <<= 1;//����
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




//2.��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ��
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


//3.���ʵ�֣�һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ����ҳ�������֡���ʹ��λ���㣩
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

//��һ���ַ����������Ϊ:"student a am i",
//���㽫��������ݸ�Ϊ"i am a student".
//Ҫ�󣺲���ʹ�ÿ⺯����ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���


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
