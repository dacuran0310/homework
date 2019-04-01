#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
printf("write chain :");
gets(a);
printf("reverse chain : %s", strrev(a));
return 0 ;
}
