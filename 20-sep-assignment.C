#include<stdio.h>
int gc(int n1,int n2);
int main()
{
int a,b,gcd;
printf("enter two numbers");
scanf("%d%d",&a,&b);
gcd=gc(a,b);
printf("gcd is %d",gcd);
return 0;
}
int gc(int n1,int n2)
{
if(n2!=0)
return gc(n2,n1%n2);
else
return n1;
}


