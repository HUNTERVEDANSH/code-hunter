#include<stdio.h>
void main()
{
int a,b,c,d;
printf("enter the three no you want to swap\n");
scanf("%d%d%d",&a,&b,&c);
printf("value of a is=%d\nvalue of b is=%d\nvalue of c is=%d\n",a,b,c);
d=a;
a=c;
c=b;
b=d;
printf("value of a is=%d\nvalue of b is=%d\nvalue of c is=%d\n",a,b,c);
}

