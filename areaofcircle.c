#include<stdio.h>
#define PI 3.14
int main ()
{
    float r,area;
    printf("enter the radius of circle");
    scanf("%f",&r);
    area=r*r*PI;
    printf("the area circle: %.2f",area);
    return 0;
}