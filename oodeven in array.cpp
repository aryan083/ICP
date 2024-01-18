#include<stdio.h>
int main ()
{
	int num,i;
	printf("enter the lenth of array");
	scanf("%d",&num);
	int a[num];
	for (i=0;i<num;i++)
	{printf("enter the %d element of array",i);
	scanf("%d",&a[i]);}
	for(i=0;i<num;i++)
	{if(a[i]%2==0)
	{
	printf("%d is even number \n",a[i]);}
	else 
	{printf("%d is odd number \n",a[i]);
	}}
	return 0;
}
