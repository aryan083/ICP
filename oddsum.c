#include<stdio.h>
int main ()
{
int i=1,num,sum=0;
printf("Enter the amount of terms");
scanf("%d",&num);
for(i=1;i<=num;i++)
{i=i+2;
sum=sum+i;}
printf("The sum %d terms is %d",num,sum);
return 0;
}