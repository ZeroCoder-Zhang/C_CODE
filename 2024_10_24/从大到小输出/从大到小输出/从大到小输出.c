#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[3] = { 0 };
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	int i = 0;
	int j = 0;
	for (j = 0; j < 2; j++)
	{
		for (i = 0; i < 2; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				int pc = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = pc;
			}
		}
	}
	printf("%d %d %d", arr[0], arr[1], arr[2]);
	return 0;
}

