#include<stdio.h>
int main()
{
int a,b,c,max;
printf("enter the three no you want to compare ");
scanf("%d%d%d",&a,&b,&c);
max=(a>b)?(a>c?a:c):(b>c?b:c);
printf("largest no among %d,%d and %d is %d.",a,b,c,max);
return 0;
}
