#include<stdio.h>
int main ()
{
	int i,j,num,sum=0;
	printf("enter the size of squre matrix");
	scanf("%d",&num);
	int a[num][num];
	for(j=0;j<num;j++)
	{for(i=0;i<num;i++)
	{	printf("enter the element of matrix");
	scanf("%d",&a[j][i]);
	sum=sum+a[j][i];}}
	printf("sum is : %d",sum);
	return 0;
}
