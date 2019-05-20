//访问结构体
#include <stdio.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//void print(struct Stu* ps)
//{
//	printf("name = %s,age = %d\n", (*ps).name, (*ps).age);//使用结构体指针访问指向对象的成员
//	printf("name = %s,age = %d\n", ps->name, ps->age);
//}
//int main()
//{
//	struct Stu s = { "zhangmeng", 20 };
//	print(&s);//结构体地址传参
//	return 0;
//}
//结构体传参的时候，要传结构体地址，
//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { { 1, 2, 3, 4 }, 1000 };
////结构体传参
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////结构体地址传参
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s);
//	print2(&s);
//	return 0;
//	
//}

//不能创建临时变量，实现两个数的交换
//方法1
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}
////方法2
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a+b;
//	b = a-b;
//	a = a-b;
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}

//求一个整数存储中在内存中二进制中1的个数
//方法1
//int main()
//{
//	int num = 10;
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num&(num - 1);
//	}
//	printf("二进制中1的个数==%d\n", count);
//	return 0;
//}

//2
//int main()
//{
//	int num = 10;
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//			num = num / 2;
//		}
//	}
//	printf("二进制中1的个数==%d\n", count);
//	return 0;
//}

//整型提升
int main()
{
	char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)
		printf("a");
	if (b = 0xb600)
		printf("b");
	if (c = 0xb6000000)
		printf("c");
	return 0;
}