#include<stdio.h>
int h,i,j;
void star()
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
    printf("high h : ");
    scanf("%d",&h);
    insao();
}
