#include<stdio.h>
void swap(int , int);
int main()
{
    int x,y ;
    printf("enter a number : ");
    scanf("%d",&x);
    printf("enter the second number");
    scanf("%d",&y);
    swap(x,y);
    printf("value of x y through  main \n x=%d \n y=%d \n",x,y);
    return 0;
}
void swap(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("value of x y through Swap function is \n X=%d \n Y= %d \n",x,y);
    
}