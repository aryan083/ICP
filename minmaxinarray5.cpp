#include<stdio.h>
int main ()
{
	int a[5],i,min=99999,max=-99999;
	for(i=0;i<5;i++)
	{printf("enter the %d element of array",i);
	scanf("%d",&a[i]);
	if(a[i]>max)
	max=a[i];
	if(a[i]<min)
	min=a[i];
	}
	printf("max is %d \n min is %d\n",max,min);
	return 0;
}
