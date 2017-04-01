#include <stdio.h>

int main(void)
{
    int a[5] = {7,2,5,3,1};
    int max = 5;
    int i, j;
    int tmp;
     for(i = 0; i < max; i++)
     {
         for(j = 0; j < max - 1 - i; j++)
         {
             if(a[j] > a[j + 1])
             {
                 tmp = a[j];
                 a[j] = a[j + 1];
                 a[j + 1] = tmp;
             }
         }
     }
       for(i = 0; i < max; i++)
           printf("a[%d]=%d | ", i, a[i]);
       printf("\n");
    return 0;
}
