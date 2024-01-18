#include<stdio.h>
int main ()
{
	int i,a[5];
	for(i=0;i<5;i++)
	{printf("enter the %d elemnt of array",i);
	scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{printf("%d",a[i]);
	}
	return 0;
}
