#include<stdio.h>
#include<conio.h>
int main ()
{
	int a[5],*p,i,ans,num;
	for(i=0;i<5;i++)
	{
		printf("Enter the %d element of array : ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("1 if you want to add more elelments in array 0 if no!");
	scanf("%d",&ans);
	
	if (ans==1)
	{
	printf("Enter the amount of number you want to add:");
	scanf("%d",&num);
	*p int realloc(*num,sizeof(int));
	for (i=5;i<num;i++)
	{
		printf("Enter the %d element of array : ",i+1);
		scanf("%d",&a[i]);
	}}
	
	else 
	{
	num=5;
	for (i=0;i<num;i++)
	{printf(" a[%d] : %d\n",i+1,a[i]);
	}
	}
	return 0;
}
