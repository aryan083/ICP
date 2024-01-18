#include<stdio.h>
int main()
{
    int yos,sal;
    char gender,qual;
    printf("enter gender enter qualification enter years of service");
    scanf("%c%c%d",&gender,&qual,&yos);

    if (gender=='m' && qual=='p' && yos>=10)
        sal=15000;
    else if(gender =='m' && qual=='g'&&yos>=10)
        sal=10000;
    else if(gender=='m' && qual=='p'&&yos<10)
        sal=10000;
    else if(gender=='m' && qual=='g'&&yos<10)
        sal=7000;    
    else if (gender=='f' && qual=='p' && yos>=10)
        sal=12000;
    else if(gender=='f' && qual=='g'&&yos>=10)
        sal=9000;
    else if(gender=='f' && qual=='p'&&yos<10)
        sal=10000;
    else if(gender=='f' && qual=='g'&&yos<10)
        sal=6000;    
    
    printf("\n your salary= %d\n",sal);
    
    


    return 0;
}