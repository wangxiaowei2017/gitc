#include <stdio.h>

int main(void)
{   char c = getchar();
     printf("c(10)=%d\t c(8)=%o\t c(16)=%x\n", c,c,c);
     printf("%c\n", c-32);

     c = getchar();
     printf("%c\n", c-32);

     c = getchar();
     printf("%c\n", c-32);

    return 0;


}
