#include <stdio.h>

int main(void)
{
    char a, b, c;
    int flag = 0;
   
    while((a = getchar()) != EOF)
       {
        
           if(flag == 0)
           {
              if(a == '%')
              
              flag = 1;
              
             else
              {
                 printf("%c", a);
              }

           }
           
           if(flag == 1)
           {
               b = getchar();
               if(b == '2')

               flag = 2;

             else
              {
                printf("%c%c", a, b);
                flag = 0;
              }

           }

           if(flag == 2)
           {
               c = getchar();
               if(c == '0')
              {
                  printf(" ");
                  flag = 0;
              }
               else
               {
                   printf("%c%c%c", a, b, c);
                   flag = 0;
               }
           }

        }
                  return 0;
         
}
