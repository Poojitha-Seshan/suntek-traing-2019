#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s1[100],s2[100];
int i,x=0,l;

scanf("%s",s1);
clrscr();
for(i=0;s1[i]!='\0';i++)
{
if(s1[i]!='a'&&s1[i]!='e'&&s1[i]!='i'&&s1[i]!='o'&&s1[i]!='u')
{
s2[x]=s1[i];
x++;
}
}
s2[x]='\0';
l=strlen(s2);
l--;
for(i=0;s1[i]!='\0';i++)
{
if(s1[i]!='a'&&s1[i]!='e'&&s1[i]!='i'&&s1[i]!='o'&&s1[i]!='u')
{
s1[i]=s2[l];
l--;
}
}
printf("%s",s1);
}