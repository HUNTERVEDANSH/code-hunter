#include<stdio.h>
 main()
{
    int a,b,sum,sub,mul,mod;
    int div;
    printf("enter two integers\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    printf("sum is=%d\n subtraction is=%d\n multiplication is=%d\n division is=%d\n mod is=%d",sum,sub,mul,div,mod);
}
