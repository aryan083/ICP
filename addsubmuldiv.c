#include<stdio.h>
int main()
{
    double a,b,sum,sub,multi;
    float div;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    multi=a*b;
    div=a/b;
    printf("sum: %d+%d=%d\n",a,b,sum);
    printf("sub: %d-%d=%d\n",a,b,sub);
    printf("multi: %d*%d=%d\n",a,b,multi);
    printf("div: %d/%d=%.4f\n",a,b,div);
    return 0;
}


