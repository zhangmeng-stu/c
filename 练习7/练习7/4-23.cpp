//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲��������� 
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


//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
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
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
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

//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
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

//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
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
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//

//#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//#include <stdlib.h>
//int factor(int n)
//{
//	int ret = 1;//����0�Ľ׳˺�1�Ľ׳�
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

//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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

