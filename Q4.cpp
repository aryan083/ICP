#include<Stdio.h>
int main()
{
	int a,b,sum,minus,multi,choice;
	float div;
	
	printf("Enter number A:");
	scanf("%d",&a);
	printf("Enter number B:");
	scanf("%d",&b);
	printf("enter 1 to add 2 to substract 3 to multiply and 4 to divide 2 numbers:");
	scanf("%d",&choice);
	switch (choice){
		
		case 1:
			sum = a+b;
			printf("Sum: %d + %d = %d\n",a,b,sum);
			break;
		
		case 2:
			minus=a-b;
			printf("substraction: %d - %d = %d\n",a,b,minus);
			break;nn
		case 3:
			multi=a*b;
			printf("multiplication: %d * %d = %d\n",a,b,multi);
			break;
			
		case 4:
			div=a/b;
			printf("divison: %d / %d = %.2f",a,b,div);
			
		default:
		printf("enter a valid number!");
		break;
	}
	
return 0;
}
