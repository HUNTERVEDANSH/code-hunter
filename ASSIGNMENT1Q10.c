#include<stdio.h>
#include<math.h>
 float main()
{int a,b,c,d;
float di,r,area,peri;
    printf("enter the first x and y coordinates\n");
    scanf("%d%d",&a,&b);
    printf("enter the second x and y coordinates\n");
    scanf("%d%d",&c,&d);
    di=sqrt(((a-c)*(a-c))+((b-d)*(b-d)));
    r=di/2.00;
    area=3.14*r*r;
    peri=3.14*2*r;
    printf("area of circle is=%f\n perimeter of circle is=%f",area ,peri);
}
