#include<stdio.h>
#include<conio.h>
void main()
{
char s1[100],s2[100];
int flag,c1[26]={0},c2[26]={0},i=0;
scanf("%s%s",s1,s2);
clrscr();
while(s1[i]!='\0')
{c1[s1[i]-'a']++;
i++;
}
i=0;
while(s2[i]!='\0')
{c2[s2[i]-'a']++;
i++;
}
for(i=0;i<26;i++)
{
if(c1[i]==c2[i])
{
flag=1;
}
else
{
flag=0;
break;
}
}
if(flag)
printf("anagram");
else
printf("not anagram");
}



