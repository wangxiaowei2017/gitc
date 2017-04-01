#include <stdio.h>

int main(void)
{
    int i = 0;
    int j = 0;

    for (j = 0; j < 3; j++)
    {
        printf("j = %d\n", j);

        for(i = 0; i < 10; i++)
        {
            if (i == 5)
            {
                break;
            }
            printf("i = %d\n", i);
        }
        printf("after i循环 ...\n");
    }
    printf("after j循环 ...\n");
    
    return 0;
    
}
