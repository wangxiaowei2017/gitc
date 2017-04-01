#include <stdio.h>

int main(void)
{
    int x;
    printf("please input a number:\n");
    scanf("%d", &x);
    if (x/10 == 0)
    {
        printf("x is one-digit\n");
    }
    else
    {
        x = x/10;
        if (x/10 == 0)
        {
            printf("x is two-digit\n");
        }
        else
        {
            printf("x is three-digit\n");
        }
    }
                        return 0;  
}
 


    
    


