#include<stdio.h>
int main ()
{
	float cel,fer;
	printf("enter the temperature in centigrade");
	scanf("%f",&cel);
	fer = (cel*1.8)+32;
	printf("temperature in Centigrade %.2f \n temperature in Fahrenheit %.2f ",cel,fer);
	return 0;
}
