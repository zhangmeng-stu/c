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
			printf("����������������룺");
		}
	}

	if (i < 3)
		printf("��¼�ɹ�\n");
	else
		printf("�˳����� \n");
	return 0;
}