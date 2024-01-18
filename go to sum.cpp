#include<stdio.h>
#include<conio.h>
int main()
{ 	
	int a,b,sum=0;
	char ans;
	lable:
	printf("Enter a number: ");
	scanf("%d",&a);
	printf("Enter a number: ");
	scanf("%d",&b);
	
	sum=a+b+sum;
	printf("The sum is %d \n",sum);
	printf("Enter Y to enter next number or NO to close the go to : ");
	scanf("%s",&ans);
	if(ans=='y' || ans== 'Y')
	{
	goto lable;}
	
	
}
