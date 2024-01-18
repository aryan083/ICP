#include<stdio.h>
#include<math.h>
int main (void)
{
float n,squre,cube;

printf("enter a number to get its squre and cube");
scanf("%f",&n);

squre=pow(n,2);
cube=pow(n,3);

printf("squre of the %1.f is:%.2f \ncube of the %1.f is:%.2f",n,squre,n,cube);
return 0;
}
