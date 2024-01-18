#include<stdio.h>
#include<string.h>
struct student{ char student_name[100];  int student_roll;int student_marks;};
int main ()
{
	int  num;
	printf("Enter the amount of students: ");
	scanf("\n%d",&num);
	struct student student[num];
	for(int i=0;i<num;i++){
	printf("enter the studnet %d name :",i+1);
	scanf("%s",&student[i].student_name);
	printf("enter the studnet %d roll number: ",i+1);
	scanf("%d",&student[i].student_roll);
	printf("Enter the student %d marks :",i+1);
	scanf("%d",&student[i].student_marks);}
	
	for(int i=0;i<num;i++)
	{
	printf("Studnet %d name : %s \n",i+1,student[i].student_name);
	printf("Studnet %d roll number: %d \n",i+1,student[i].student_roll);
	printf("Student %d marks : %d \n",i+1,student[i].student_marks);
	}
	
	return 0;
}
