#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee { char firstname[50];
char lastname[50];
char city[25];
int salary; 
};

int main ()
{int num,i;
printf("Enter the number of employees : ");
scanf("%d",&num);

struct employee e[num];
for(i=0;i<num;i++)
{
	printf("\nEnter the %d employee First name :",i+1);
	scanf("%s",&e[i].firstname);
	printf("\nEnter the %d employee Last name :",i+1);
	scanf("%s",&e[i].lastname);
	printf("\nEnter the %d employee City :",i+1);
	scanf("%s",&e[i].city);
	printf("\nEnter the %d employee Salary :",i+1);
	scanf("%d",&e[i].salary);
}

for(i=0;i<num;i++)
{
	printf("\nThe employee %d First name : %s",i+1,e[i].firstname);
	printf("\nThe employee %d Last name : %s",i+1,e[i].lastname);
	printf("\nThe employee %d City : %s",i+1,e[i].city);
	printf("\nThe employee %d Salary : %d \n\n\n",i+1,e[i].salary);
}

	return 0;
}
