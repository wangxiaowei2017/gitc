#include <stdio.h>

int main(void)
{
    char a , b, c, d, e;
    int flag = 0;

    while(a != EOF)
    {
        if(flag == 0) 
        {
            a = getchar();
            if(a == 'a')
            {

              flag = 1;
            }

          else
            {
               printf("%c", a);
               flag = 0;
            }
        
        }

        if(flag == 1)
        {   
            b = getchar();
            if(b == 'c')

            {
                flag = 2;
            }

           else
            {
               printf("%c%c", a, b);
               flag = 0;
            }
        }

        if(flag == 2)
        {
            c = getchar();
            if(c == 'a')
            {

                flag = 3;
            }
            else
            {
                printf("%c%c%c", a, b, c);
                flag = 0;
            }
        }

        if(flag == 3)
        {
            d = getchar();
            if(d == 'b')
            {
                flag = 4;
            }
            else
            {
                
                 
        
            if(d == 'c')
            {
                flag = 2;
                printf("%c%c", a, b);
            }

            }
        }

        if(flag == 4)
        {
            e = getchar();
            if(e == 'a')
            {
                printf(" ");
                flag = 0;
            }
              else
              {
                  printf("%c%c%c%c%c", a, b, c, d, e);
                  flag = 0;
              }
        }


    }

    return 0;
}
