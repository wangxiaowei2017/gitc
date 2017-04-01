#include <stdio.h>

int main(void)
{
    int a;
    int i;
    int n = 0;
    printf("please input a number\n");
    scanf("%d", &a);
    for(i = 1; a != 0; i++)
    {
        a = a / 10;
    n = n + 1;
    }
    printf("n = %d\n", n);
    return 0; 

}
