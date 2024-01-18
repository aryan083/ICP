#include<stdio.h>
int main ()
{
	int a,*p;
	p= &a;
	printf("variable address is %p",p);
	printf("variable address is %d",&a);
	return 0;
	
}
