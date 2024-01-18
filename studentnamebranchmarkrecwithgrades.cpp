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
scanf("\n%s",&student[i].name);
printf("Enter the marks of student:");
scanf("\n%d",&student[i].marks);
}
for(i=1;i<11;i++)
{printf("\n %d student name: %s\n",i,student[i].name);

printf("\nstudnet branch: %s\n",student[i].branch);

printf("\nthe marks of student: %d\n",student[i].marks);

if (student[i].marks<33)
{printf("FAIL!!!\n");
}

else if(student[i].marks>=33 &&student[i].marks <=49 )
{printf("Third Class\n");
}

else if(student[i].marks>=50 && student[i].marks <=70)
{printf("Second Class\n");
}

else 
{printf("First Class\n");
}
}
return 0;
}

