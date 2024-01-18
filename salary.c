#include<stdio.h>
int main ()
{
    int a,b,c,d,e;

    printf("enter salary fpr person A :");
    scanf("%d", &a);
    printf("enter salary fpr person B :");
    scanf("%d", &b);
    printf("enter salary fpr person C :");
    scanf("%d", &c);
    printf("enter salary fpr person D :");
    scanf("%d", &d);
    printf("enter salary fpr person E :");
    scanf("%d", &e);
    
    if ( a>b && a>c && a>d && a>e )
	{
	{printf("the person A has the highest salary");}
    else if(b>a && b>c && b>d && b>e);
	{printf("the person B has the highest salary");}
    else if(c>a && c>b && c>d && c>e);
    {printf("the person C has the highest salary");}
    else if(d>a && d>b && d>c && d>e);
	{printf("the person D has the highest salary");}}
	else 
    {printf("the person E has the highest salary");}
}
