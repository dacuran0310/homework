#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{int i; char s[255],j,k,n;
char x=' ';

printf("chain:"); gets(s);
fflush(stdin);
while (s[0]==' ')
strcpy(&s[0],&s[1]);
while (s[strlen(s)-1]==' ')
strcpy(&s[strlen(s)-1],&s[strlen(s)]);
for(i=0; i<strlen(s) ;i++)
if ((s[i]==' ')&&(s[i+1]==' '))
{
strcpy(&s[i],&s[i+1]);
i--;
}
for(j=0;j<n;i++){
    if(s[i]=',' && s[i+1]!=' ')
    for(k=n;k>i;k--){
        s[k]=s[k-1];
        s[j]=x;
        break;
    }
    else s[n]=x;
}
strlwr(s);
printf("chain after remake : \"%s\"",s);

getch();
}
