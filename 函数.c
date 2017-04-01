#include <stdio.h>
 int fun (int n);
int main(int argc, const char *argv[])
{
     int n = 6;


    int g = fun(n);


    return 0;
}


int  fun(int n)
{ 
    int c;
    int i;
   int j = 1;
  for(i = 1; i <= n; i++)
  {   
      j = i * j;
  }

  printf("%d\n", j);
  


}
