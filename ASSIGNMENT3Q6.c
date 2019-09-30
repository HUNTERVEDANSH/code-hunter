#include<stdio.h>
void main()
{
    float n;
    int b,c;
    printf("enter the floating point number with three digit integral part\n");
    scanf("%f",&n);
    int a=n;
    b=a%10;
    c=a%100;
    printf("the required pattern is\n");
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",a);


}
