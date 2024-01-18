#include<stdio.h>
int main ()
{
    int hardness,tensile, grade=10;
    float carbon;
    printf("enter the hardness of steel:");
    scanf("%d",&hardness);
    printf("enter the carbon content of steel:");
    scanf("%f",&carbon);
    printf("enter the tensileness of steel:");
    scanf("%d",&tensile);

   if(hardness>50 && carbon<0.7 && tensile>5600 )
    {printf("the grade of steel is %d",grade);}

    else if(hardness>50 && carbon<0.7 && tensile<5600)
    {grade=grade-1;
    printf("the grade of steel is %d",grade);}
    else if(hardness<50 && carbon<0.7 && tensile>5600)
    {grade=grade-2;
    printf("the grade of steel is %d",grade);}
    else if(hardness>50 && carbon>0.7 && tensile>5600)
    {grade=grade-3;
    printf("the garde of steel is %d",grade);}
    else if(hardness>50 || carbon<0.7 || tensile>5600)
    {grade=grade-4;
    printf("the grade of steel is %d",grade);}
    else
    {grade=grade-5;
    printf("the grade of steel is %d",grade);}
    return 0;
}
