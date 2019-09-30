#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float Area,s;
    printf("enter the values of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    Area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle is=%f\n",Area);
}
