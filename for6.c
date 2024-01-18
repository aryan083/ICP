#include<stdio.h>
int main ()
{
    int c,d,g,h,i;
    printf("enter the value of c");
    scanf("%d",&c);
    printf("enter the value of d");
    scanf("%d",&d);
    printf("enter the value of g");
    scanf("%d",&g);
    printf("enter the value of h");
    scanf("%d",&h);
    i=(c+d)*(g+h);
    printf("i=(%d+%d)*(%d+%d)=%d",c,d,g,h,i);
    return 0;


}
