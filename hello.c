# include <stdio.h>

int main () {
  
    int number,a,b,c,d,e;
    printf("enter the number of 5 digits");
    scanf("%d",&number);
    
    a=number%10000;
    number=number;
    b=number%1000;
    number=number;
    c=number%100;
    number=number;
    d=number%10;
    number=number;
    e=number%1;
    printf("the rverse of number is : &d", e,d,c,b,a);
    
    return 0;
  
    return 0;
}
    
    