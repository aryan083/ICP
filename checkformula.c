#include<stdio.h>
int main (void)
{
    float x,k,a;
    printf("x=((k-4)*(a*4))/100.\n");
    printf("enter the valuve of k for the above formula:\n");
    scanf("%f",&k);
    printf("enter the value of a for the above formula:\n");
    scanf("%f",&a);
    x=((k-4)*(a*4))/100;
    printf("((%.2f-4)*(%.2f*4))/100.=%.2f\n",k,a,x);
    return 0; 
}