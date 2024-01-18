#include<stdio.h>
int main ()
{
	int i, a[5],atkt=0;
	for(i=0;i<5;i++)
	{printf("enter the marks for 5 subjects");
	scanf("%d",&a[i]);
	if(a[i]<40)
	atkt++;
	}
	if(atkt==1 || atkt==2)
	{printf("ATKT");
	}
	else if(atkt>2)
	{printf("FAIL");
	}
	else if(atkt==0)
	{printf("PASS");
	}
	return 0;
}
