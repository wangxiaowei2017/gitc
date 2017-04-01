#include <stdio.h>

int main(void)
{
    int a[9] = {1,2,3,3,2,1,1,2,3};
    int j = 1;
    int k = 2;
    int l = 3;
    int i;
             printf("1 =");
      for(i = 0; i < 9; i++)
      {
          if(a[i] == j)
          {
              printf("a[%d] ", i);
          }
      }
    printf("\n");
    printf("2 =");
      for(i = 0; i < 9; i++)
      {
          if(a[i] == k)
          {
              printf("a[%d] ", i);
          }
      }
    printf("\n");
    printf("3 =");
       for(i = 0; i < 9; i++)
       {
           if(a[i] == l)
           {
               printf("a[%d] ", i);
           }
       }
       printf("\n");
       return 0;

    
    
}
