#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the no you want to compare\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
{
printf("largest no is%d",a);
}
else
{
printf("largest no is%d",c);
}}
else if(b>a)
{
if(b>a)
{
printf("largest no is%d",b);
}
else
{
printf("largest no is%d",a);
}
}
else
{
printf("largest no is%d",c);
}
}
