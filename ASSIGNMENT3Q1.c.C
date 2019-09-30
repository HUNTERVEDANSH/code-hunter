#include<stdio.h>
void main()
{
int n,a,b;
printf("enter the three digit no\n");
scanf("%d",&n);
a=n%10;
b=n%100;
printf("the required pattern is\n");
printf("%d\n",n);
printf("%d\n",b);
printf("%d\n",a);
}
