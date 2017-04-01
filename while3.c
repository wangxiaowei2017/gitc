#include <stdio.h>

int main(void)
{
   int i = 2;
   int j;
   int flag = 0;
   
   while(i <= 100)
   {
       flag = 0;
       j = 2;
    while(j <= i-1)
    {
        if(i % j == 0)
        {
            flag = 1;
            break;
        }

        j++;
    }
    if(flag == 0)
    {
        printf("%d\n", i);
    }

    i++;
    
   }   
    return 0;
}

