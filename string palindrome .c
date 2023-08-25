#include <stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char s[1000];
int n;
int c=0;
int i;
clrscr();
printf("enter a string ");
gets(s);
n=strlen(s);
for(i=0;i<n/2;i++)
{

if(s[i]==s[n-i-1])
c++;
}
if(c==i)
{

printf("paliendrome");
}
else
printf("not paliendrome");

getch();
 return 0;
 }
