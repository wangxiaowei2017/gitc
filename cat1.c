#include <stdio.h>

int main(void)
{   int a;
    char c;
    for(;(c = getchar()) != EOF;)
    {
        if(c == 10)
        {
            a++;
            
        }
        
    }
    printf("%d\n", a);
    
    return 0;


}

