#include <stdio.h>
//
//int f(int a)
//{
//	int b = 0;
//	static int c = 3;
//	a = c++, b++;
//	return (a);
//}
//int main()
//{
//	int a = 2, i, k;
//	for (i = 0; i < 2; i++)
//	{
//		k = f(a++);
//	}
//	printf("%d\n", k);
//	return 0;
//}
int x = 3;
void inc()
{
	static int x = 1;
	x *= (x + 1);
	printf("%d", x);
	return;
}
int main()
{
	int i;
	for (i = 1; i < x; i++)
	{
		inc();
	}
	return 0;
}