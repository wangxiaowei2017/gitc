#include <stdio.h>

int main(void)
{
    int a[5] = {1,2,3,4,5,};
    int i, j;
    for(i = 4; i >= 0; i--)
    {
        j = a[i];
    
    printf("%d", j);

    }
    printf("\n");
    return 0;
}
