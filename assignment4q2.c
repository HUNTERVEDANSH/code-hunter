#include<stdio.h>
void main()
{
int ci;
float u,ac,sa,na,s,t;
char name[20];
printf("enter the customer id\n");
scanf("%d",&ci);
printf("enter the name of the customer\n");
scanf("%s",&name);
printf("enter the unit consumed\n");
scanf("%f",&u);
if(u>100 && u<=199)
{
ac=1.20;
}
else if(u>=200 && u<400)
{
ac=1.50;
}
else if(u>=400 && u<600)
{
ac=1.80;
s=0.15;
}
else if(u>=600)
{
ac=2.00;
s=0.15;
}
else
{
printf("incorrect unit entered\n");
}
t=u*ac;
sa=s*u;
na=t+sa;
printf("Customer IDNO %d\n",ci);
printf("Customer Name %s\n",name);
printf("Unit Consumed %f\n",u);
printf("Amount charges @Rs %f",ac);
printf("per unit : %f\n",t);
printf("Surcharge amount : %f\n",sa);
printf("Net amount paid by customer: %f\n",na);
}









