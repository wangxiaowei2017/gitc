#include <stdio.h>

int main(void)
{
    int i;
    double sum = 0;
    double mul = 1;
    for(i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("sum = %e\n", sum);
    for(i = 1; i <= 10; i++)
    {
        mul = mul * i;
    }
    printf("mul = %e\n", mul);
    sum = 0;
    mul = 1;
    for(i = 1; i <= 10; i++)
    {
        mul = mul * i;
        sum = sum + mul;
    }
    printf("sum = %e\n", sum);
    return 0;
}
