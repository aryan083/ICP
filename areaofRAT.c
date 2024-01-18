#include<stdio.h>
int main ()
{
    int b,h;
    float area;
    printf("enter the base width of triangle:");
    scanf("%d",&b);
    printf("enter the height of triangle:");
    scanf("%d",&h);
    area=0.5*h*b;
    printf("area=%d*%d*1/2=%.2f",b,h,area);
    return 0;
}
