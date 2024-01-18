#include<stdio.h>
int main()
{
    int rup;
    float dol;

    printf("enter the amount rupees to be converted in dollars");
    scanf("%d",&rup);
    dol=rup*0.012;
    printf("the %d amount rupees converted into dollars in %.3f",rup,dol);
    return 0;

}
