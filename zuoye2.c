#include <stdio.h>

int main(void)
{
    int year = 2016, month = 2, day = 10;
    int sum  = 0;
    int leap = 0;

    // year ??
    // month > 2 ??
    // day 30? 31?

    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        printf("leap year ...!\n");
        leap = 1;
     }
    else
    {
        printf(" not leap year ...!\n");
    }


    if (month == 1)
    {
        sum = day;
    }
    else if (month == 2)
    {
        sum = 31 + day;
    }
    else if (month == 3)
    {
        sum = 31 + 28 + leap + day;
    }
    else if (month == 4)
    {
        sum = 31 + 28 + leap + 31 + day;
    }
    else if (month == 5)
    {
        sum = 31 + 28 + leap + 31 + 30 + day;
    }
    else if (month == 6)
    {
        sum = 31 + 28 + leap + 31 + 30 + 31 + day;
    }
    else if (month == 7)
    {
        sum = 31 + 28 + leap + 31 + 30 + 31 + 30 + day;
    }
    else if (month == 8)
    {
        sum = 31 + 28 + leap + 31 + 30 + 31 + 30 + 31 + day;
    }
    else if (month == 9)
    {
        sum = 31 + 28 + leap + 31 + 30 + 31 + 30 + 31 + 31 + day;
    }
    else if (month == 10)
    {
        sum = 31 + 28 + leap + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
    }
    else if (month == 11)
    {
        sum = 31 + 28 + leap + 31 + 30 + 30 + 30 + 31 + 31 + 30 + 31 + day;
    }
    else if (month == 12)
    {
        sum = 31 + 28 + leap + 31 + 30 + 30 + 30 + 31 + 31 + 30 + 31 + 30 + day;
    }

    
     printf("year = %d, sum = %d\n", year, sum);



    return 0;

}
