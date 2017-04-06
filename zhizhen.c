#include <stdlib.h>
#include <stdio.h>
int main(void)
{    
    int i;
    int compare(const void *a, const void *b)
    {
        return(*(int *)a) -(*(int *)b);
    }
    int a[5] = {2,10,1,5,3};
    qsort(a, 5, sizeof(int), compare);
    for(i = 0; i < 5; i++)
    {
         printf("a[%d] = %d\n", i, a[i]);
    }
       return 0;
    
}
