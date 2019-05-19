//指针
#include <stdio.h>
//int main()
//{
//	int a = 10;//在指针中开辟一段空间
//	int *p = &a;//对变量a取出他地址，将a的地址存放在变量p中，p就是一个指针变量
//	return 0;
//}


//指针+-整数
//int main()
//{
//	int n = 10;
//	char *pc = (char*)&n;
//	int *pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return 0;
//}

//指针的解引用
//int main()
//{
//	int n = 0x11223344;
//	char *pc = (char*)&n;
//	int *pi = &n;
//	*pc = 0x55;
//	*pi = 0;
//	return 0;
//}


//指针和数组名
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//	//数组名表示的是数组首元素的地址
//}
//
////求字符串长度
//
//int my_strlen(char *s)
//{
//	char *p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}
//int main()
//{
//	char arr[]= "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}

//指针和数组
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);//求数组大小
//	for (int i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p <====> p+%d =%p\n", i, &arr[i], i, p + i);
//	
//	}
//	return 0;
//	//通过指针来访问数组
////}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);//求数组大小
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", *(p + i));
//
//	}
//	return 0;
//}

//结构体
//描述一个学生
typedf struct Stu
{
	char name[20];
	int age;
	char sex[5];
	char id[20];
}Stu;

