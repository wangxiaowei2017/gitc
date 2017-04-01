#include <stdio.h>

int main(void)
{
        int a[10] = {1,2,3,4,5,6,7,8,9,10};
        int i;
        int sum = 0;
        for(i = 0; i < 10; i++)
        {
            printf("a[%d] = %d\n", i, a[i]);
            
            sum = sum + a[i];
        }

        printf("sum = %d\n", sum);

        return 0;
            


}
