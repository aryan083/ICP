#include<stdio.h>
#include<math.h>
int main ()
{
    float pri,rate,time,ci;
    printf("Enter the principle amount:");
    scanf("%f",&pri);
    printf("\nEnter time duration:");
    scanf("%f",&time);
    printf("\nEnter the Intrest rate:");
    scanf("%f",&rate);
    
    ci=pri*(pow((1+rate/100),time));
    printf("\n Compound Interest : %.2f", ci);
    return 0 ;

}