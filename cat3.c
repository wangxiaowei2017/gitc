#include <stdio.h>

int main(void)
{   char a;
     a = getchar();
    while(a != EOF)
    {
        if(a == ' ')
        {
            printf("%%20");
        
        }
        else
        {
    
            printf("%c", a);
        }
        a = getchar();
    }
        
    
    return 0;
}
