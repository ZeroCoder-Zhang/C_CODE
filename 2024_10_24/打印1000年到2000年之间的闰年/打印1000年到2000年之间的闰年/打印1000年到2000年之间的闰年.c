#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int y = 1000;
	for (y = 1000; y <= 2000; y++)
	{
		if ((y % 4 == 0) && (y % 100 != 0))
		{
			printf("%d ", y);
		}
	}
	return 0;
}