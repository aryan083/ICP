#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter number A:");
    scanf("%d",&a);
    printf("\nEnter number B:");
    scanf("%d",&b);
    printf("\nENter number C:");
    scanf("%d",&c);
    if(a>b && a>c)
    printf("\nnumber A %d is biggest number.",a);
    else if (b>a && b>c)
    printf("\nnumber B %d is biggest number.",b);
    else
    printf("\nNumber C %d is biggest number.",c);
    return 0;
}