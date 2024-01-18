#include<stdio.h>
int main ()
{
    int p;
    float a,t,r;
    printf("enter the principal amount P:");
    scanf("%d",&p);
    printf("enter thr return rate per year");
    scanf("%f",&r);
    printf("enter time in years");
    scanf("%f",&t);
    a=p*(1+(r*t));
    printf("a=%.2f",a);
    return 0;
}