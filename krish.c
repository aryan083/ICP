#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter number\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	    sum=(sum*10)+a[i];
}
	printf("%d",sum);
	}