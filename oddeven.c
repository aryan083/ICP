#include<stdio.h>
int main ()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    num%2?printf("number %d is odd",num):printf("number %d is even",num);
    return 0;
}
