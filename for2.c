#include<stdio.h>
int main ()
{
    int num,rs,ls;

    printf("enter a number");
    scanf("%d",&num);
    ls=num<<3;
    rs=num>>3;
    printf("left swift=%d",ls);
    printf("Rght swift=%d",rs);
    return 0;

}
