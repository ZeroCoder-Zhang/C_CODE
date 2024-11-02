#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//写代码在一个整形有序数组中查找具体的某个数

//要求：找到了就打印数字所在的下标，找不到则输出：找不到。

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
		printf("找不到");
	}

	return 0;
}