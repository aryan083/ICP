#include<stdio.h>
#include<conio.h>
int fact(int );
int main ()
{
    int f,n;
    printf("Enter a number:");
    scanf("%d",&n);
    f=fact(n);
    printf("\nFactorial of %d is :- %d",n,f);
    return 0;
}
int fact(int n)
{
    int f=1;
    if(n==1)
    {return 1;}
    else{f=n*fact(n-1);
    return f;}
}