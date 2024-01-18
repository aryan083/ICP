#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{ char name[100]; 
int enrollment;
int marks;
};

int main ()
{
	int  num,i;
	printf("Enter the amount of students: ");
	scanf("%d",&num);
	struct student student[num];
	for(i=0;i<num;i++){
	printf("Enter the studnet %d name : ",i);
	scanf("%s",&student[i].name[100]);
	printf("Enter the studnet %d enrollment : ",i);
	scanf("%d",&student[i].enrollment);
    printf("Enter the marks of student %d : ",i);
    scanf("%d",&student[i].marks);
    }
	for(int i=0;i<num;i++)
    {
	printf("\nStudent name is :- %s",student[i].name[100]);
	printf("\nStudent enrollment is :- %d ",student[i].enrollment);
	printf("\nStudent marks is :- %d ",student[i].marks);}
	return 0;
}