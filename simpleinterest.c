#include<stdio.h>
int main ()
{
    float p,t,r,i;
    printf("Enter principle (amount): ");
    scanf("%f", &p);

    printf("Enter time(in years): ");
    scanf("%f", &t);

    printf("Enter rate: ");
    scanf("%f", &r);
    i=(p*t*r)/100;
    printf("simple interest(SI)= %.2f",i);
    return 0;

}