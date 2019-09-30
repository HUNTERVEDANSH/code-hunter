#include<stdio.h>
void main()
{
float t;
printf("ENTER THE TEMPERATURE IN CENTERADE");
scanf("%f",&t);
if(t<0)
{
printf("Freezing weather");
}
else if(t>0 && t<10)
{
printf("Very Cold Weather");
}
else if(t>=10 && t<20)
{
printf("Cold Weather");
}
else if(t>=20 && t<30)
{
printf("Normal temperature");
}
else if(t>=30 && t<40)
{
printf("Its Hot");
}
else
{
printf("Very Hot");
}
}
