//ָ��
#include <stdio.h>
//int fun(int a, int b)
//{
//	int v = a + b;
//	return v; 
//}
//int main()
//{
//	int(*pfun)(int, int);//����ָ��
//	pfun = &fun;//pfunָ�����ȡ��ַ
//	(*pfun)(10, 20);//*pfun�õ�ָ���ֵ������ִ�к���
//	//��֮�󣬺���������������������ڵ�ַ
//	pfun = fun;
//	pfun(1, 2);
//
//} 

//�ַ�ָ��
//1
//int main()
//{
//	char ch = 'w';
//	char *pc = &ch;
//	*pc = 'w';
//	return 0;
//}

////��һ�������ַ��������ַ�h�ĵ�ַ��ŵ�ָ�����pstr��
//int main()
//{
//	char* pstr = "hello bit.";
//	printf("%s\n", pstr);
//	return 0;
//}

////�����ĸ�����
//int main()
//{
//	int n = 9;
//	float *pFloat = (float *)&n;
//	printf("n��ֵΪ;%d\n", n);
//	printf("*pFloat��ֵΪ:%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("n��ֵΪ;%d\n", n);
//	printf("*pFloat��ֵΪ:%f\n", *pFloat);
//	return 0;
//}

//������
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
////����ͬ�ĳ����ַ���ȥ��ʼ����ͬ�������ʱ��ͻῪ�ٳ���ͬ���ڴ�飬str1��str2��ͬ
////str3��srt4ָ��ͬһ���ռ�
//

//һ������ָ���ʹ��
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
void print_arr2(int (*arr)[5], int row, int col)//����ָ��
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