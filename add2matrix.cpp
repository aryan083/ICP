#include<stdio.h>
int main()
{
	int num,i,j;
	printf("enter the size of matrix");
	scanf("%d",&num);
	int a[num][num], b[num][num];
	
	for(j=0;j<num;j++)
	{for(i=0;i<num;i++)
	{printf("enter the %d %d element for matrix a",j,i);
	scanf("%d",&a[j][i]);
	}}
	for(j=0;j<num;j++)
	{for(i=0;i<num;i++)
	{printf("enter the %d %d element for matrix b",j,i);
	scanf("%d",&b[j][i]);
	}}
	
	for(j=0;j<num;j++)
	{for(i=0;i<num;i++)
	{printf("%d\n",a[j][i]+b[j][i]);
	}
	}
	return 0;
}
