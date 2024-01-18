#include<stdio.h>
int main (void)
{
    int chair, total_cost;
    float cpc;
    printf("enter the amount of chairs:");
    scanf("%d",&chair);
    printf("enter the total cost of all chairs");
    scanf("%d",&total_cost);
    cpc=total_cost/chair;
    printf("the cost per chair is : %.2f \n",cpc);
    return 0;
}