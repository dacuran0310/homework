#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdlib.h>
void main()
{
    int big, normal,i,n;
    char a[100];
    printf("Input: ");
    gets(a);big=0;
    normal=0;
    i=0;
    n= strlen(a);
for(i=0;i<=n;i++)
{

    if(a[i]>=65&&a[i]<=90)
    {
    big=big+1;

    }
    else if(a[i]>=97&&a[i]<=122)
    {
        normal=normal +1;


    }
}
printf("has %d big word\n",big);
printf("has %d normal word\n",normal);
}
