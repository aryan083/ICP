#include<stdio.h>
int main ()
{
    int years;
    printf("enter a a year");
    scanf("%d",&years);
    if(years%100==0)
    printf("%d year is a not leap year",years);
    else if(years%4==0 )
    printf("%d year is a leap year",years);
    else
    printf("%d year is not a leap year",years);

    return 0;
}