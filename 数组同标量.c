#include <stdio.h>

int main(void)
{
    int a[5] = {1,2,3,1,1};
    int i;
    int temp = 1;
    for(i = 0; i < 5; i++)
    {
        if(a[i]==temp)
        {
            printf("a[%d]= %d\n", i, a[i]);
    
        }
    }
    return 0;
}
