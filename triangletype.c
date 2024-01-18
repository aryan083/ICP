#include<stdio.h>
int main ()
{
    float a,b,c;
    printf("enter 3 sides of triangle a,b,c in cm");
    scanf("%f%f%f",&a,&b,&c);

    if(a=b=c)
    printf("the triagle is equilateral triagle");
    else if( a=b )
    printf("the triagle is isosceles triagle");
    else if( c=b )
    printf("the triagle is isosceles triagle");
    else if( a=c )
    printf("the triagle is isosceles triagle");
    else if(a!=b!=c)
    printf("the triagle is scalene triagle");
    else if((a*a)+(b*b)==c*c ||(a*a)+(c*c)==b*b ||(b*b)+(c*c)==a*a)
    printf("the triagle is a right angle triagle");
    else
    printf("the triangle is not a valid one");


}