#include <stdio.h>

int main(void)
{
    int a[5] = {1,2,3,4,5};
    int n = 5;
    int i, j;
    for(i = 0; i < 2; i++)
    {
        j = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = j;
    }

    for(i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}
