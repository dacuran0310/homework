#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
 char s[256];
 printf("vui long nhap chuoi: ");
 gets(s);
 puts(s);

 int n=strlen(s);

 for(int i=0;i<n;i++)
 if(s[i]==32)
 {
 for(int j=i;j<n;j++)
 {
 s[j]=s[j+1];
 i--;
 }
 }


 for(int i=0;i<strlen(s);i++)
 {
 printf("%s",s);break;
 }
 return 0;
}
