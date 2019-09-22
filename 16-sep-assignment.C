#include<stdio.h>
void main()
{
char str[100];
int x,c=0,count[26]={0};
scanf("%s",str);
while(str[c]!='\0')
{
if(str[c]>='a'&&str[c]<='z')
{count[str[c]-'a']++;

}
c++;
}
for(c=0;c<26;c++)
{
printf("%c - %d\n",c+'a',count[c]);
}
}