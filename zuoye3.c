#include <stdio.h>

int main(void)
{
    int a = 2, b = 10, c = 4;

    //查找最大的数
    if (a > b)
    {
        if (a > c)
        {
            printf("a is max = %d\n", a);
        }
        else
        {
            printf("c is max = %d\n", c);
        }

    }
    else
    {
        //b >= a

        if (b > c)
        {
            printf("b is max = %d\n", b);
        }
        else
        {
            //b <= c
            printf("c is max = %d\n", c);

        }

    }

    return 0;

}












