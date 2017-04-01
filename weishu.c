#include <stdio.h>

int main(void)
{
    int x = 789;
    int sum = 1;
    int y, z;

    printf("x = %d\n", x);

    y = x / 10;
    printf("y = %d\n", y);
    if (y != 0)
    {
        sum = sum + 1;
    }

     z = y / 10;
 
    if (z != 0)
    {
        sum = sum + 1;
    }

        printf("sum = %d\n", sum);

    return 0;
}


