#include<stdio.h>
void main()
{
int a,b,c,n,r;
printf("enter the no you want to check");
scanf("%d",&n);
a=n%10;
b=((n%100)-a)/10;
c=(((n-a)/10)-b)/10;
r=(a*100)+(b*10)+(c);
printf("%s",(r==n)?"palindrome":"not palindrome");
}
