//#include <stdio.h>
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	num1 & num2;
//	num1 | num2;
//	num1 ^ num2;
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++ || ++b || d++;
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n",a,b,c,d);
//	return 0;
//}
//int arr[10];
//arr[9] = 10;



//#include <stdio.h>
//void test1()
//{
//	printf("hehe\n");
//}
//void test2(const char *str)
//{
//	printf("%s\n",str);
//}
//int main()
//{
//	test1();//实用（）作为函数调用操作符
//	test2("hello bit.");//实用（）作为函数调用操作符
//	return 0;
//}



#include <stdio.h>
struct Stu
{
	char name[10];
	int  age;
	char sex[5];
	double score;
};
void set_age1(struct Stu stu)
{
	stu.age = 18;//结构成员访问
}
void set_age2(struct Stu* pStu)
{
	pStu->age = 18;//结构成员访问
}
int main()
{
	struct Stu stu;
	struct Stu* pStu = &stu;//结构成员访问

	stu.age = 20;//结构成员访问
	set_age1(stu);

	pStu->age = 20;//结构成员访问
	set_age2(pStu);
	return 0;
}
