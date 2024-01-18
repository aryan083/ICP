#include<stdio.h>
int main ()
{
	int a[2] [2],b[2][2],c[2][2],i,j;
	for(j=0;j<2;j++)
	{for(i=0;i<2;i++)
	{printf("enter the %d %d element of matrix A",j,i);
	scanf("%d",&a[j][i]);	}}
	for(j=0;j<2;j++)
	{for(i=0;i<2;i++)
	{printf("enter the %d %d element of matrix B",j,i);
	scanf("%d",&b[j][i]);	}}
	c[0][0]=a[0][0]*b[0][0] + a[0][1]*b[1][0];
	c[0][1]=a[0][0]*b[0][1] + a[0][1]*b[1][1];
	c[1][0]=a[1][0]*b[0][0] + a[1][1]*b[1][0];
	c[1][1]=a[1][0]*b[0][1] + a[1][1]*b[1][1];

	for(j=0;j<2;j++)
	{for(i=0;i<2;i++)
	{printf("c[%d][%d]=%d\n",j,i,c[j][i]);}}
return 0;
}
