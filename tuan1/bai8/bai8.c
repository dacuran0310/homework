#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
printf("nhap xau can tao :");
gets(a);
printf("chuoi dao nguoc : %s", strrev(a));
return 0 ;
}
