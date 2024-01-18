#include<stdio.h>
#include<string.h>
int main ()
{	
	char string[50], a;
	printf("enter a stirng");
	gets(string);
	printf("enter the letter to be removed");
	scanf("%c",&a);
	for(int i=0;i<50;i++)
	{if (string[i]==a)
	{
	continue;}
	else if(string[i] == NULL)
	{break;
	}
	else 
	{printf("%c",string[i]);
	}}
	return 0;
	}
