#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	printf("enter string A");
	gets(a);
	printf("enter string B");
	gets(b);	
	printf("%s",strcat(a,b));
	return 0;
}
