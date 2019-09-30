#include<stdio.h>
void main()
{
    int n,a,b,c,r;
    printf("enter the number you want to check\n");
    scanf("%d",&n);
    a=n%10;
    b=((n%100)-a)/10;
    c=(((n-a)/10)-b)/10;
    r=(a*a*a)+(b*b*b)+(c*c*c);
    printf("THE NUMBER YOU ENTERED IS ");
    printf("%s",(r==n)?"ARMSTRONG":"NOT ARMSTRONG");
}
