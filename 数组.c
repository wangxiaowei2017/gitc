#include <stdio.h>

int main(void)
{
    int a[5] = {1,2,3,4,5};
    int b[3];
    b[0] = 0;
    b[1] = 1;
    b[2] = 2;
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}

