#include<stdio.h>
int main()
{
    int n,i,prime,j;
    printf("Enter the Number");
    scanf("%d",&n);
    printf("Prime Numbers are: \n");
    for(i=1; i<=n; i++)
    {
    prime=0;
    for(j=1; j<=n; j++)
    {
    if(i%j==0)
    prime++;
    }
    if(prime==2)
    printf("%d " ,i);
    }
    return 0;
}