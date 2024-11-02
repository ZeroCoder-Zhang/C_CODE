#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 1;
	int j = 1;
	for (i = 1; i <= 9; ++i)
	{
		for (j = 1; j <= i; j++)
		{
			int n = j * i;
			printf("%d * %d = %d ", j, i, n);
		}
		printf("\n");
	}
	return 0;
}