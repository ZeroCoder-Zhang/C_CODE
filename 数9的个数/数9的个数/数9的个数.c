#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//编写程序数一下 1到 100 的所有整数中出现多少个数字9
int main()
{
	int i = 1;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			printf("%d ", i);
		}
		else if (i / 10 == 9)
		{
			printf("%d ", i);
		}
	}
	return 0;
}