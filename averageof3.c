#include<stdio.h>
int main ()
{
    float a,b,c,avg;
    printf("enter first number");
    scanf("%f",&a);
    printf("enter second number");
    scanf("%f",&b);
    printf("enter third number");
    scanf("%f",&c);
    avg=(a+b+c)/3;
    printf("the average:%.2f",avg);
    return 0;

}