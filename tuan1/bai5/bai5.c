#include<stdio.h>
int main()
{
    int day, month,year;
    printf("nhap ngay ");scanf("%d",&day);
    printf("nhap thang ");scanf("%d",&month);
    printf("nhap nam ");scanf("%d",&year);
    if (day<1||day>31||month<1||month>12||year<1)
    {
        printf("khong hop le");
    }
    else
        if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
      printf("%d la mot nam nhuan", year);
   else
      printf("%d khong phai la nam nhuan", year);
      return 0;
}
