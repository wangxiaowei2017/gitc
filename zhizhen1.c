#include <stdio.h>
int(*fun)(int a, int b);


int sum(int a, int b)
{
        return a + b;
}


int main(void)
{

    fun = sum;
    int i = fun(10,20);
    printf("%d\n", i);
    return 0;
}


