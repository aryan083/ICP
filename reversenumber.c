#include<stdio.h>
int main ()
{
    int number,a,b,c,d,e,f,g,h,i;
    printf("enter the 5 digit number : ");
    scanf("%d",&number);   
    a=number%10;
    b=number/10;
    c=b%10;
    d=number/100;
    f=d%10;
    g=number/1000;
    h=g%10;
    i=number/10000;
    printf("the rverse number is :%d%d%d%d%d", a,c,f,h,i );  
    return 0 ;
}
