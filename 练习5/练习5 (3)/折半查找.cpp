#include <stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;//�������±�
	int key = 7;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
			break;
	}
	if (left <= right)
		printf("�ҵ��ˣ��±���%d\n", mid);
	else
	{
		printf("�Ҳ���/n");
		return -1;
	}
	return 0;
}