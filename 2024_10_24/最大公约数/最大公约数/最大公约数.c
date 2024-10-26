#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b)
{
    int temp;
    while (b != 0) 
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}



int main()
{
    int num1 = 20, num2 = 40;
    int result = gcd(num1, num2);
    printf("%d\n", result);
    return 0;
}

//Õ·×ªÏà³ý·¨
