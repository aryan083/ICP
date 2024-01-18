#include<stdio.h>
int main ()
{
    float a,b,c;
    printf("enter 3 sides of triangle a,b,c in cm");
    scanf("%f%f%f",&a,&b,&c);

    if(a>b && a>c && a<b+c)
    printf("the trianlge is a valid one");
    else if(b>a && b>c && b<a+c)
    printf("the trianlge is a valid one");
    else if (c>a && c>b && c<a+b)
    printf("the trianlge is a valid one");
    else if(a=b=c )
    printf("the trianlge is a valid one");
    else if(a=b )
    printf("the trianlge is a valid one");
    else if(c=b )
    printf("the trianlge is a valid one");
    else if(a=c )
    printf("the trianlge is a valid one");
    else 
    printf("the triangle is not a valid one");
    return 0;
    

}