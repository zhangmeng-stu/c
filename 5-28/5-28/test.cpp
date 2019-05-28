#define _CRT_SECURE_NO_WARNINGS 
#include<stdlib.h>
#include <stdio.h>
#include<string.h>
#include <assert.h>
//模拟实现strlen
//计数器方法
//int my_strlen(const char *str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//不创建临时变量
//int my_strlen(const char *str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//		return 1 + my_strlen(str + 1);
//}

//指针的方式
//int my_strlen(char *s)
//{
//	char *p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	int count = my_strlen(arr);
//	printf("%d", count);
//	system("pause");
//	return 0;
//}

//模拟实现strcpy
//char *my_strcpy(char *dest, const char * src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while ((*dest++ = *src++))
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = { "abcdef" };
//	char arr2[] = { "higklm" };
//	printf("%s", my_strcpy(arr1, arr2));
//	system("pause");
//	return 0;
//}

//模拟实现strcat
//char *my_strcat(char *dest, const char*src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest)
//	{
//		dest++;
//	}
//	while ((*dest++ = *src++))
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//		char arr1[] = { "abcdef" };
//		char arr2[] = { "higklm" };
//		printf("%s", my_strcat(arr1, arr2));
//		system("pause");
//		return 0;
//
//}
//模拟实现strcmp
//int my_strcmp(const char *str1, const char *str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while ((*str1 == *str2) && (*str1 != '\0'))
//	{
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//		char arr1[40] = { "abcdef" };
//		char arr2[20] = { "higklm" };
//		printf("%d", my_strcmp(arr1, arr2));
//		system("pause");
//		return 0;
//	
//}

//模拟实现strstr
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	int len;
//	if (!(len = strlen(str2)))//此种情况下s2不能指向空，否则strlen无法测出长度，这条语句错误
//
//		return(char*)str1;
//
//	for (; *str1; ++str1)
//
//	{
//
//		if (*str1 == *str2&&strncmp(str1, str2, len) == 0)
//
//			return(char*)str1;
//
//	}
//
//	return NULL;
//
//}
//int main()
//{
//		char arr1[40] = { "higabklm" };
//		char arr2[20] = { "ab" };
//		printf("%s\n", my_strstr(arr1, arr2));
//		system("pause");
//		return 0;
//}


