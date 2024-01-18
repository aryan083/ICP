#include<stdio.h>
struct studentrecord{
	
	char name[60];
	char branch[30];
	int  marks;
}student[10];

int main()
{
int i;
for(i=1;i<11;i++)
{printf("\nEnter the %d student name:", i);
scanf("%s",&student[i].name);
printf("\nEnter studnet branch:");
scanf("%s",&student[i].name);
printf("Enter the marks of student:");
scanf("%d",&student[i].marks);
}
for(i=1;i<11;i++)
{printf("\n %d student name: %s",i,student[i].name);

printf("\nstudnet branch: %s",student[i].branch);

printf("\nthe marks of student: %d",student[i].marks);

}
return 0;
}

