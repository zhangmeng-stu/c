//1.5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果 
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c, d, e;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b < 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d < 5; d++)
				{
					for (e = 1; e < 5; e++)
					{
						if (a*b*c*d*e == 120)
						{
							if (((b == 2) + (a == 3) == 1)
								&& ((b == 2) + (e == 4) == 1)
								&& ((c == 1) + (d == 2) == 1)
								&& ((c == 5) + (d == 3) == 1)
								&& ((e == 4) + (a == 1) == 1))
							{
								printf("a = %d,b = %d, c = %d,d = %d,e = %d", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}

//2.日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int k = 0;
	for (k = 'a'; k <= 'd'; k++)
	{
		if ((k != 'a') + (k == 'c') + (k == 'd') + (k != 'd') == 3)
		{
			printf("k is %c", k);
		}
	}
	system("pause");
	return 0;
}
//在屏幕上打印杨辉三角。
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	int a[10][10] = { 0 };
		for (i = 0; i < 10; i++)  //数组元素修改部分
		{
			for (j = 0; j < 10; j++)
			{
	
				if ((i == j) || (j == 0))  // 把数组的第一列和对角线元素都置为1
				{
					a[i][j] = 1;
				}
				if (i >= 2)  //从第三行开始，每个元素的值为其肩膀上两个元素之和
				{
					a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
				}
			}
		}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < i; j++)
		{
			printf("%2d", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
//#include <stdio.h>
//int main()
//{
//	int i = 0, j = 0;
//	int a[10][10] = { 0 };
//	for (i = 0; i < 10; i++)  //数组元素修改部分
//	{
//		for (j = 0; j < 10; j++)
//		{
//
//			if ((i == j) || (j == 0))  // 把数组的第一列和对角线元素都置为1
//			{
//				a[i][j] = 1;
//			}
//			if (i >= 2)  //从第三行开始，每个元素的值为其肩膀上两个元素之和
//			{
//				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)  //数组输出部分，按行修改
//	{
//		for (j = 0; j < 10 - i; j++)
//		{
//			printf(" ");  //根据每行行数与空格关系，建立关系
//		}
//		for (j = 0; j <= i; j++)  //控制输出左下半部分数组
//		{
//			printf("%2d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}