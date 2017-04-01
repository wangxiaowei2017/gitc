#include <stdio.h>

int main(void)
{
    int a[5] = {1,23,10,89,35};
    int i, j;

    for(i = 0; i < 4; i++)
    {
             if(a[i] > a[i + 1])
            {
                j = a[i];
            }
             else
             {
                 j = a[i + 1];
             }
    }
      
          printf("%d", j);
          printf("\n");
    return 0;
}
