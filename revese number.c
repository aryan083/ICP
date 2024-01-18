#include<stdio.h>
int main ()
{
    int number,a,b,c,d,e,f,g,h,i,j;
    printf("enter the 5 digit number : ");
    scanf("%d",&number);

    a=number/10;
    b=a%1;
    c=number/100;
    d=c%10;
    e=number/1000;
    f=e%10
    g=number/10000;
    h=g%10;





    printf("the rverse number is :%d%d%d%d%d", h,f,d,b);
    return 0 ;
}
