#include<stdio.h>
int main ()
{
	int i,even=0, sum=0,num=0;
	for(i=1;i<21;i++)
	{num++;
	 if(num%2==0)
	 sum=num+sum;
	}	
	printf("%d",sum);
	return 0;
}
