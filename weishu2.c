#include <stdio.h>

int main(void)
{
    int x = 4567;
    printf("x = %d\n", x);
    int a, b, c, d;
    d = x / 1000;
    if (d != 0)
    {
        printf("d = %d\n", d);
    }
    if (c = x % 1000 / 100)
    {
        printf("c = %d\n", c);
    }
    if (b = x % 1000 % 100 / 10);
    {
        printf("b = %d\n", b);
    }
    if (a = x % 1000 % 100 % 10 );
    {
        printf("a = %d\n", a);
    }
    return 0;

}
