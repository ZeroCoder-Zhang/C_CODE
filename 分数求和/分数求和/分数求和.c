#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float i = 1;
	float sum = 0;
	for (i = 1; i <= 100; i++)
	{
		if ((int)i % 2 != 0)
		{
			sum += 1 / i;
		}
		else
		{
			sum -= 1 / i;
		}
	}
	printf("%f\n", sum);
	return 0;
}