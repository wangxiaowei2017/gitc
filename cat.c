#include <stdio.h>

int main(void)
{
    char c;
    
    for(;(c = getchar())  != EOF;)
    {
        if(c>=97 && c<=122)
        {
        printf("%c", c-32);
        }
    
    else
        {
        printf("%c", c);
        }
    }
    printf("\n");
    return 0;
    

}
