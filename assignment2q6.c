#include<stdio.h>
void main()
{
int n,a,b,c,s,p;
printf("ENTER THE THREE DIGIT INTEGER NO\n");
scanf("%d",&n);
a=n%10;
b=(n%100-a)/10;
c=(n-b*10-a)/100;
s=a+b+c;
p=a*b*c;
printf("sum of the digits of the three digit no is=%d\n",s);
printf("product of the digits of the three digit no is=%d\n",p);
}

