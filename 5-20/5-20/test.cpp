//���ʽṹ��
#include <stdio.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//void print(struct Stu* ps)
//{
//	printf("name = %s,age = %d\n", (*ps).name, (*ps).age);//ʹ�ýṹ��ָ�����ָ�����ĳ�Ա
//	printf("name = %s,age = %d\n", ps->name, ps->age);
//}
//int main()
//{
//	struct Stu s = { "zhangmeng", 20 };
//	print(&s);//�ṹ���ַ����
//	return 0;
//}
//�ṹ�崫�ε�ʱ��Ҫ���ṹ���ַ��
//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { { 1, 2, 3, 4 }, 1000 };
////�ṹ�崫��
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////�ṹ���ַ����
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

//���ܴ�����ʱ������ʵ���������Ľ���
//����1
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
////����2
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

//��һ�������洢�����ڴ��ж�������1�ĸ���
//����1
//int main()
//{
//	int num = 10;
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num&(num - 1);
//	}
//	printf("��������1�ĸ���==%d\n", count);
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
//	printf("��������1�ĸ���==%d\n", count);
//	return 0;
//}

//��������
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