#include<stdio.h>
void main()
{
int a,b;
printf("enter the two no you want to swap\n");
scanf("%d%d",&a,&b);
printf("value of a is=%d\nvalue of b is=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("value of a after using 2 variables only is=%d\nvalue of b after using 2 variables only is=%d\n",a,b);
}

