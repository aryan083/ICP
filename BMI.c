#include<stdio.h>
int main()
{
    float height,weight,bmi;
    printf("enter height in Meter:");
    scanf("%f",&height);
    printf("enter weight in Kelogram:");
    scanf("%f",&weight);
    bmi=weight/height;

    if(bmi<15)
    printf("BMI Category Starvation");
    
    else if(bmi>=15.1 && bmi<=17.5)
    printf("BMI Category Anorexic");

    else if(bmi>=17.6 && bmi<=18.5)
    printf("BMI Category Underweight");

    else if(bmi>=18.6 && bmi<=24.9)
    printf("BMI Category Ideal");
    
    
    else if(bmi>=25 && bmi<=25.9)                  
    printf("BMI Category Overweight");

    else if(bmi>=30 && bmi<=30.9)
    printf("BMI Category Obese");

    else if(bmi>= 40)
    printf("BMI Category Morbidly Obese");
}