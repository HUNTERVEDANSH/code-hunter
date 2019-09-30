#include<stdio.h>
void main()
{
float bs,hra,da,gs;
printf("enter the basic salary");
scanf("%f",&bs);
if(bs<=10000.00)
{
hra=(bs*20.00)/100.00;
da=(bs*80.00)/100.00;
}
else if(bs<=20000.00)
{
hra=(bs*25.00)/100.00;
da=(bs*90.00)/100.00;
}
else
{
hra=(bs*30.00)/100.00;
da=(bs*95.00)/100.00;
}
gs=hra+bs+da;
printf("THE GROSS SALARY =%f",gs);
}
