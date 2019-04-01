#include <stdio.h>
#include <conio.h>
 int main()
 {
     int a,b,c,n,tg;
     printf("\n Enter 3 numbers ");
     scanf("%d",&n);
     a=n/100;
     b=(n%100)/10;
     c=n%10;
     if (a<b)
     {
         tg=a;a=b;b=tg;
     }
     if (a<c)
     {
        tg=a;a=c;c=tg;
     }
     if(b<c)
     {
         tg=b;b=c;c=tg;
     }
     printf("\n 3numbers increase %d%d%d",a,b,c);
     getch();
     return 0;
 }
