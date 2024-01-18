#include<stdio.h>
int main ()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    num%2?printf("%d is odd number",num):printf("%d is even number",num);
}
