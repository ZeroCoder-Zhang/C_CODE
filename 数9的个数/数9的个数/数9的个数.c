#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
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