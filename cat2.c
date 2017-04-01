#include <stdio.h>

int main(void)
{
    int a = 0;
    char temp = ' ';
     int c;
   while((c = getchar()) != EOF)
    {
        if((c != 32) &&( temp == 32||temp == 10))
        {
                a++;  
        }
        temp = c;
        
    }
            printf("%d\n",a);
        
    
    return 0;

}
