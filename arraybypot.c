//10 it numbers by array
#include<stdio.h>
int main ()
{
    int*p, a[10],i,sum=0;
    p=a;
    for(i=0;i<10;i++)
    {
        printf("enter the element %d of array",i);
        scanf("%d",&a[i]);
        sum=sum+*p;
        p++;
    }
    printf("the sum is: %d",sum);
    return 0;
}