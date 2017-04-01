#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    char c;
    while((c = getchar()) != EOF)
    {
        if((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        {
            a++;
        }
        else if(c >= 48 && c <= 57)
        {
            b++;
        }
    }
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
