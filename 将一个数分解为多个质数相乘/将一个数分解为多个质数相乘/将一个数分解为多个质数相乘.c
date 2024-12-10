#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int num)
{
    if (num < 2)
    {
        return 0;
    }
    else
    {
        for (int j = 2; j * j < num; ++j)
        {
            if (num % j == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

void prime_factorization(int N)
{
    int n = N;
    printf("%d = ", n);
    for (int i = 2; i < N; i++)
    {
        while (n % i == 0 && is_prime(i))
        {
            printf("%d", i);
            n /= i;
            if (n > 1)
            {
                printf(" * ");
            }
        }
    }
    printf("\n");
}

int main() 
{
    int number;
    printf("请输入一个整数: ");
    scanf("%d", &number);
    prime_factorization(number);
    return 0;
}