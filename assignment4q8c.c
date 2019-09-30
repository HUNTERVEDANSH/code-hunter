#include<stdio.h>
void main()
{
float a,b,c;
printf("enter the sides of the triangle\n");
scanf("%f%f%f",&a,&b,&c);
if(a==b && b==c)
{
printf("TRIANGLE IS EQUILATERAL TRIANGLE");
}
else if(a==b || b==c || c==a)
{
printf("TRIANGLE IS ISOSCELES TRIANGLE ");
}
else 
{
printf("TRIANGLE IS SCALENE TRIANGLE");
}
}
