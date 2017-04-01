#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int temp;
    for(i = 2; i <= 1000; i++)
    {
        temp = 0;
        for(j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                temp = temp + j;
            }
        }
        if(i == temp)
        {
            printf("%d\n", i);
        }
    }
    printf("\n");
    return 0;

}
