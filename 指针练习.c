#include <stdio.h>

int main(int argc, const char *argv[])
{   int a [5] = {1,2,3,4,5};
   /* int *p = a;
    int i;
    for(i = 0; i < 6; i++)
        printf("%d\n", a[i]);
    for(i = 0; i < 6; i++)
        printf("%d\n", *(a + i));
    for(i = 0; i < 6; i++)
        printf("%d\n", *(p + i));
    for(i = 0; i < 6; i++)
        printf("%d\n", p[i]);
    printf("%d\n", (&a[2])[2]);
    printf("++++++++++++");
    for(i = 0; i < 6; i++)
        printf("%d\n", *p++);
    for(i = 0; i < 6; i++)
        printf("%d\n", *a++);
        */
   int i;
   char *q[5] = {"hello", "world", "nihao", "hi", "welcome"};
   for(i = 0; i < 5; i++)
       printf("%s\n", q[i]);
   int k[3][5];
   int (*b)[5] = k;
    b = &a;
    return 0;
}
