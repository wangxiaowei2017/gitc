#include <stdio.h>

int main(void)
{
    int a = 10;
    a++;
    printf("a = %d\n", a);//11

    a++;
    printf("a = %d\n", a);//12


    int b = 10;

    printf("b++ = %d\n", b++);//10
    printf("++b = %d\n", ++b);//12


    return 0;  
}    
