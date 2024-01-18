#include<stdio.h>
int main ()
{
    int a,b;
    printf("enter number A:");
    scanf("%d",&a);
    printf("enter number B:");
    scanf("%d",&b);
    a=a+b;//a=30 (10+20)    
    b=a-b;//b=10 (30-20)    
    a=a-b;//a=20 (30-10)
    printf("A=%d \n B=%d",a,b);
    return 0 ;    

}
