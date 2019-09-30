#include<stdio.h>
#include<math.h>
void main()
{
float n,a,b;
printf("enter the value you want to know");
scanf("%f",&n);
n=(n*3.14)/180.00;
a=sin(n);
b=cos(n);
printf("the value of sin is=%f\nvalue of cos is=%f",a,b);
}
