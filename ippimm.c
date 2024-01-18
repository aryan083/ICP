#include<stdio.h>
int main ()
{
    int i ,a,b,c,d;
    printf("enter a number");
    scanf("%d",&i);
    a=i++;
    b=i--;
    c=++a;
    d=--a;
    printf("i++=%d\n",a);
    printf("i--=%d\n",b);
    printf("++i=%d\n",c);
    printf("--i=%d\n",d);
    return 0;
}
