#include <stdio.h>

int main(void)
{   
    char c, b, a;
    int flag = 0;
    while((c = getchar()) != EOF)
    {
        flag = 0;
        if(c == '%')
        {
        
            flag = 1;
            b = getchar();
        
        if(b == '2')
     {
            flag = 2;
            a = getchar();
        
        if(a == '0')
        {     
            c = ' ';
                 
         printf("%c", c);
            
            continue;
        }
        else
        {
            printf("%c%c%c", c, b, a);
            continue;
        }
     }
        else
        {
            printf("%c%c", c, b);
            continue;
        }
    }
            printf("%c", c);
    }
    return 0;
}
