#include<stdio.h>
int h,i,j;
void insao()
{
    for(i=0;i<h;i++)
    {
        for(j=0;j<h+i;j++)
            if(j<h-i-1) printf(" ");
            else printf("*");
            printf("\n");
    }
}
main()
{
    printf("nhap h ");
    scanf("%d",&h);
    insao();
}
