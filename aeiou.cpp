#include<stdio.h>
#include<string.h>
int main ()
{
	int i=0,count=0;
	char a;
	printf("enter a character :");
	scanf("%c",&a);
	
	if( a=='a' || a=='e' || a=='i' || a=='o' || a=='u'||a=='A' ||a=='E' ||a=='I' ||a=='O' ||a=='U')
	{printf("The enterd character %c is a vowel\n",a);
	}
	else 
	{
	printf("The enterd character %c is consonant\n",a);
	}
	
	
		
	return 0;
}

