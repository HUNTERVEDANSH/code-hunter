#include<stdio.h>
void main()
{
float a,b,c;
printf("enter the lenght of the sides of the triangle\n");
scanf("%f%f%f",&a,&b,&c);
if(a+b>c && b+c>a && a+c>b)
{
printf("the triangle is valid");
}
else
{
printf("the triangle is not valid");
}
}
