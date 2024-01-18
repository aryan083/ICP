#include<stdio.h>
int main ()
{
    double a,b,product;
    printf("enter number. a=");
    scanf("%lf",&a);
    printf("enter number. b=");
    scanf("%lf",&b);
    product=a*b;
    printf("a*b=%.2lf",product);
    return 0;
}