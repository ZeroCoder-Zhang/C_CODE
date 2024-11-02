#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int max = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			max = arr[i + 1];
		}
		else if (arr[i] > arr[i + 1])
		{
			max = arr[i];
		}
	}
	printf("%d", max);
	return 0;
}
