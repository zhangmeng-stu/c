#include  <stdio.h>
#include <string.h>
int main()
{
	char psw[10] = {};
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		printf("please input:");
		scanf("%s", psw);
		if (0 == strcmp(psw, "123456"))
			break;
		else
		{
			printf("密码错误，请重新输入：");
		}
	}

	if (i < 3)
		printf("登录成功\n");
	else
		printf("退出程序 \n");
	return 0;
}