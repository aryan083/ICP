#include<stdio.h>
int main(void)
{
    float a,b,x;
    printf("enter number a ");
    scanf("%f",&a);
    
    printf("enter number b ");
    scanf("%f",&b);

    x=a>b?a:b;
    printf("%f is the bigger number",b);

    return 0;


}