#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the two no you want to swap\n");
scanf("%d%d",&a,&b);
printf("value of a is=%d\nvalue of b is=%d\n",a,b);
c=a;
a=b;
b=c;
printf("value of a is=%d\nvalue of b is=%d\n",a,b);
}

