#include <stdio.h>

int main(void)
{
    int i = 1;
    int j = 1;
    int sum = 0;
    for(i = 1; i <= 10; i++)
    {
    
        j = i*j;
        printf("%d\n", j);
        sum = sum + j;
    }
    printf("sum = %d\n", sum);
    return 0;
    
    
}

