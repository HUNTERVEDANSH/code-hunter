#include<stdio.h>
void main()
{
    int n,a,b,c,r;
    printf("enter the three digit no you want to reverse\n");
    scanf("%d",&n);
    a=n%10;
    b=((n%100)-a)/10;
    c=(((n-a)/10)-b)/10;
    r=((a*100)+(b*10)+c);
    printf("the you want to reverse is=%d\n",r);
}
