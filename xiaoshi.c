#include <stdio.h>

int main(void)
{
    int x,y;
    printf("enter a 24-hour time:");
    scanf("%d:%d", &x,&y);

    if (x<=12)
    {
        printf("change 12-hour time: %d:%d AM\n" ,x ,y);
    }
    else if(x==24)
    {
        printf("change 12-hour time: %d:%d PM\n" ,00 ,y);
    }
    else
    {
        printf("change 12-hour time: %d:%d AM\n" ,x-12 ,y);
    }
        return 0;
}
