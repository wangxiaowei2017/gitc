#include <stdio.h>

int main(void)
{
    int i, j;
    int a[5][5];
    for(i = 0; i < 5; i++)
     a[i][0]=1;  /*第一列全置为一*/
    for(j = 1; j < 5; j++)
        a[0][j]=0;

        for(i = 1; i < 5; i++)
            for(j = 1; j < 5; j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j];/*每个数是上面两数之和*/
    
    for(i = 0; i < 5; i++)  /*输出杨辉三角*/
    
        for(j = 0; j <= i; j++)
        {
            printf("%4d",a[i][j]);
        if(j == i)
        printf("\n\n");
        }
           return 0;
}
