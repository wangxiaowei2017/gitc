#include <stdio.h>
#define MAX(a,b) (a>b) ? a:b

int main(void)
{
  int x, y, max;
  printf("input two numbers:");
  scanf("%d%d", &x, &y);
  max=MAX(x,y);
  printf("max=%d\n", max);

    return 0;
}
