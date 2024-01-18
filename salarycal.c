#include<stdio.h>
int main ()
{
    //int ;
    float da,hra,salary;
    printf("Enter the salary of the employee:");
    scanf("%f",&salary);
    da= salary*(0.5);
    hra= salary*(0.2);
    printf("Dearness Allowance(DA) of employee : %.2f\n",da);
    printf("House rent Allowance(HRA) of employee : %.2f\n",hra);
    return 0;
    
    }
