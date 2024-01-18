#include<stdio.h>
int main ()
{
    int a,b,c;
    float s;

    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter the value of c:");
    scanf("%d",&c);
    s=(4*(a+c)-(2*a*b))*0.01;
    printf("s=(4*(%d+%d)-(2*%d*%d)/100=%.2f",a,c,a,b,s);
    return 0;
}
