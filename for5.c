#include<stdio.h>
int main()
{
    int p,n;
    float r,a;
    printf("enter the value of p:");
    scanf("%d",&p);
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the value of r:");
    scanf("%f",&r);
//   a=(p*((1+((r/100)/n))-p));
    a=(p*(1+(r/100)/n)-p),
    printf("a=(%d(1+(%.2f/100)/%d)-%d))=%.2f",p,r,n,p,a);
    return 0;
}
