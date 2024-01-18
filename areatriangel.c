#include<stdio.h>
int main ()
{
    int h,b;
    float area;
    printf("enter the height of triangle(h):");
    scanf("%d",&h);
    printf("enter the base of triangle(b):");
    scanf("%d",&b);
    area=0.5*b*h;
    printf("the area of the triagel is : %2.f\n",area);
    return 0;
}