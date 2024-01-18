#include<Stdio.h>

int main()
{
    int age;
    char gender,martial_status,F,M,f,m,Y,y;

   printf("enter geneder");
   scanf("%c",gender);
   printf("enter martial status");
   scanf("%dc",&martial_status);
   printf("enter age");
   scanf("%d",&age);

   if(gender==m || gender==M && martial_status==Y || martial_status==y &&age>=30)
   {printf("you're eligible for insarance");}
        if (gender==f || gender==F && martial_status==Y || martial_status==y &&age>=25)
           { printf("you're eligible for insarance");}
    else
    {printf("you're not eligible for insarance");}
    return 0 ;
}



