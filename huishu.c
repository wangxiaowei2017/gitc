#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, n, i;
    for(i = 10000; i <= 99999; i++)
    {
        n = i;
        a = n % 10;
        b = n / 10 % 10;
        c = n / 100 % 10;
        d = n / 1000 % 10;
        e = n / 10000 % 10;

        if(a == e && b == d)
        {
            printf("%d\n", i);
        }
    }
            printf("\n");
            return 0;

}

