#include <stdio.h>

int main(void)
{
    int a, b, c;
    int i, sum = 0;

    for(i = 100; i <=999; i++)
    {
        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;
        
        sum = (a*a*a) + (b*b*b) + (c*c*c);

           if(sum == i)
           {

            printf("i = %d\n", i);

           }
    }                                   
    return 0;  
        
}
