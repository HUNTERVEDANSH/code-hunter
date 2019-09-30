#include<stdio.h>
void main()
{
float m,c,p,t,tcm;
printf("enter the marks of chemistry,maths and physics\n");
scanf("%f%f%f",&c,&m,&p);
t=p+c+m;
tcm=c+m;
if(m>=65 && c>=60 && p>=55)
{
if(t>=190 || tcm>=130)
{
printf("The candidate is eligible for admission");
}
else
{
printf("total marks or total marks in maths and chemistry is less then the required");
}
}
else
{
printf("the marks required in maths,physics or chemistry is less then the required");
}
}
