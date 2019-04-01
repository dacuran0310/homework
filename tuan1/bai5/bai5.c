#include<stdio.h>
int main()
{
    int day, month,year;
    printf("day ");scanf("%d",&day);
    printf("month ");scanf("%d",&month);
    printf("year ");scanf("%d",&year);
    if (day<1||day>31||month<1||month>12||year<1)
    {
        printf("fail");
    }
    else
        if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
      printf("%d is a special year", year);
   else
      printf("%d is a normal year", year);
      return 0;
}
