#include<stdio.h>
void main()
{
    int n,a,r;
    printf("ENTER THE NUMBER YOU WNT TO CHECK\n");
    scanf("%d",&n);
    a=n*n;
    r=a%10;
    printf("THE NO YOU ENTERED IS ");
    printf("%s",(r==n)?"AUTOMORPHIC":"NOT AUTOMORPHIC");

}
