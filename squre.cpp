#include<stdio.h>
#include<conio.h>
float square(float num, float squre)
{printf("Enter a number:");
scanf("%f",&num);
squre=num*num;
return (squre);

}

int main ()
{float sq,num,squre;
 sq= square(num,squre);
 printf("%.2f is the square of %.2f",sq,num);
 return 0;
	
}
