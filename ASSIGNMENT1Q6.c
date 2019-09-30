#include<stdio.h>
#include<math.h>
void main()
{
    float p,r,si,t,a,g,ci;

    printf("enter rate,time,amount,principle\n");
    scanf("%f%f%f%f",&r,&t,&a,&p);
    si=(p*r*t)/100.00;
    ci=p*pow((1+(r/100.00)),t);
    printf("simple interest=%f\n compound interest=%f\n",si,ci);

}
