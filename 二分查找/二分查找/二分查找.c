#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//д������һ���������������в��Ҿ����ĳ����

//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����

int bubble(int arr[], int right, int left, int target)
{
	while (right >= left)
	{
		int mid = (right + left) / 2;
		if (arr[mid] == target)
		{
			return mid;
		}
		else if (arr[mid] > target)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return -1;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 0;
	scanf("%d", &x);
	int ret = bubble(arr,n-1,0,x);
	if (ret != -1)
	{
		printf("%d\n", ret);
	}
	else
	{
		printf("�Ҳ���");
	}

	return 0;
}