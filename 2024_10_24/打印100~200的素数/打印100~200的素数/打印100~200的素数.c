#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int isPrime(int num);

int main() 
{
    for (int i = 100; i <= 200; i++) 
    {
        if (isPrime(i)) 
        {
            printf("%d ", i);
        }
    }
    return 0;
}

int isPrime(int num) 
{
    if (num < 2)
    {
        return 0;
    }
    int sqrt_num = (int)sqrt(num);
    for (int i = 2; i <= sqrt_num; i++)
    {
        if (num % i == 0) 
        {
            return 0;
        }
    }
    return 1;
}