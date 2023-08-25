#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
int m;
char s[20],ch;
clrscr();
printf("enter the string ");
gets(s);

printf("enter the index u want to capatilize ");
scanf("%d",&m);
ch=s[m-1];
ch=ch-32;
s[m-1]=ch;
puts(s);

getch();
}

