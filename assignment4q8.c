#include<stdio.h>
void main()
{
float a,b,c,sum;
printf("ENTER THE ANGLES IN DEGREE OF TRINGLE YOU WANT TO CHECK\n");
scanf("%f%f%f",&a,&b,&c);
sum=a+b+c;
if(a!=0 && b!=0 && c!=0)
{
if(sum==180)
{
printf("THE TRIANGLE IS A VALID TRIANGLE");
}
else
{
printf("THE TRIANGLE IS NOT VALID");
}
}
else
{
printf("values entered are not right");
}
}

